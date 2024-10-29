/*
 * This file is part of Nephelocentaurus(νεφελοκένταυρος) 天馬
 * Copyright (C) 2024 Yisu Fang, Github @CouDeGras
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *  
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/*

Compile with 16MB Flash 3MB APP 9.9MB FATFS/FFAT


*/
#pragma once
#include <WiFi.h>
#include <HTTPClient.h>
#include <WebServer.h>
#include <SPIFFS.h>
//#include <EEPROM.h>
#include "FS.h"
#include "FFat.h"
#include <SPI.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <ArduinoJson.h>
#include <Arduino.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
#include <mDNS.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <Update.h>
#include "WiFiMulti.h"
#include <IPAddress.h>
#include <ESPping.h>
#include "esp_task_wdt.h"
#include <lvgl.h>
#include <lv_conf.h>
#include "Adafruit_GFX.h"
#include <Adafruit_GC9A01A.h>
#include "ui.h"
#include "ui_helpers.h"
// Define pins for display interface. Adjust these for your setup.
// Define pins for display interface. Adjust these for your setup.
#define TFT_CS 5     //15
#define TFT_DC 27    //2
#define TFT_MOSI 15  //22  //23  // Change these to the actual pins you are using for MOSI
#define TFT_SCLK 14  //18  // Change these to the actual pins you are using for SCLK
#define TFT_RST 33   //4    // Optional, set to -1 if not used

// Create an instance of the display using software SPI
Adafruit_GC9A01A tft(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);
//Adafruit_GC9A01A tft(TFT_CS, TFT_DC);
// LVGL display driver flush callback
void my_disp_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.writePixels((uint16_t *)px_map, w * h);
  tft.endWrite();

  lv_display_flush_ready(disp);
}

#define I2S_DOUT 25
#define I2S_BCLK 27
#define I2S_LRC 26

#define BUTTON1_PIN 4
#define BUTTON2_PIN 19
//#define USE_SPIFFS  // Comment this out if you want to use FFat instead

//#define EEPROM_SIZE 512

WiFiMulti wifiMulti;

#define FORMAT_FFAT true

#include "esp_log.h"

class Logger {
private:
  static String lastLine;

public:
  static void begin(unsigned long baud) {
    Serial.begin(baud);  // Optional: Initialize Serial
  }

  static void print(const String &message) {
    lastLine = message;
    ESP_LOGI("Logger", "%s", message.c_str());
    Serial.print(message);  // Optional: Keep the original Serial output if needed
  }

  static void print(const char message[]) {
    lastLine = String(message);
    ESP_LOGI("Logger", "%s", message);
    Serial.print(message);  // Optional: Keep the original Serial output if needed
  }

  static void print(char c) {
    lastLine = String(c);
    ESP_LOGI("Logger", "%c", c);
    Serial.print(c);  // Optional: Keep the original Serial output if needed
  }

  static void print(int num) {
    lastLine = String(num);
    ESP_LOGI("Logger", "%d", num);
    Serial.print(num);  // Optional: Keep the original Serial output if needed
  }

  static void println(const String &message) {
    lastLine = message;
    ESP_LOGI("Logger", "%s", message.c_str());
    Serial.println(message);  // Optional: Keep the original Serial output if needed
  }

  static void println(const char message[]) {
    lastLine = String(message);
    ESP_LOGI("Logger", "%s", message);
    Serial.println(message);  // Optional: Keep the original Serial output if needed
  }

  static void println(char c) {
    lastLine = String(c);
    ESP_LOGI("Logger", "%c", c);
    Serial.println(c);  // Optional: Keep the original Serial output if needed
  }

  static void println(int num) {
    lastLine = String(num);
    ESP_LOGI("Logger", "%d", num);
    Serial.println(num);  // Optional: Keep the original Serial output if needed
  }

  static void println() {
    lastLine = "";
    ESP_LOGI("Logger", "");
    Serial.println();  // Optional: Keep the original Serial output if needed
  }

  static void printf(const char *format, ...) {
    char buffer[256];  // Adjust buffer size if necessary
    va_list args;
    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    lastLine = String(buffer);
    ESP_LOGI("Logger", "%s", buffer);
    Serial.print(buffer);  // Optional: Keep the original Serial output if needed
  }

  static String getLastLine() {
    return lastLine;
  }

  // Add more overloaded methods as needed to match Serial's interface
};

// Initialize static member
String Logger::lastLine;

void listDir(fs::FS &fs, const char *dirname, uint8_t levels) {
  Serial.print("Listing directory: " + String(dirname));

  File root = fs.open(dirname);
  if (!root) {
    Serial.println("- failed to open directory");
    return;
  }
  if (!root.isDirectory()) {
    Serial.println(" - not a directory");
    return;
  }

  File file = root.openNextFile();
  while (file) {
    if (file.isDirectory()) {
      Serial.print("  DIR : ");
      Serial.println(file.name());
      if (levels) {
        listDir(fs, file.path(), levels - 1);
      }
    } else {
      Serial.print("  FILE: ");
      Serial.print(file.name());
      Serial.print("\tSIZE: ");
      Serial.println(file.size());
    }
    file = root.openNextFile();
  }
}

String readFile(fs::FS &fs, const char *path) {
  Serial.println("Reading file: " + String(path));

  File file = fs.open(path);
  if (!file || file.isDirectory()) {
    Serial.println("- failed to open file for reading");
    return String();
  }

  String fileContent;
  while (file.available()) {
    fileContent += (char)file.read();
  }
  file.close();
  return fileContent;
}

void writeFile(fs::FS &fs, const char *path, const char *message) {
  Serial.printf("Writing file: %s\r\n", path);

  File file = fs.open(path, FILE_WRITE);
  if (!file) {
    Serial.println("- failed to open file for writing");
    return;
  }
  if (file.print(message)) {
    Serial.println("- file written");
  } else {
    Serial.println("- write failed");
  }
  file.close();
}

void appendFile(fs::FS &fs, const char *path, const char *message) {
  Serial.printf("Appending to file: %s\r\n", path);

  File file = fs.open(path, FILE_APPEND);
  if (!file) {
    Serial.println("- failed to open file for appending");
    return;
  }
  if (file.print(message)) {
    Serial.println("- message appended");
  } else {
    Serial.println("- append failed");
  }
  file.close();
}

void renameFile(fs::FS &fs, const char *path1, const char *path2) {
  Serial.printf("Renaming file %s to %s\r\n", path1, path2);
  if (fs.rename(path1, path2)) {
    Serial.println("- file renamed");
  } else {
    Serial.println("- rename failed");
  }
}

void deleteFile(fs::FS &fs, const char *path) {
  Serial.printf("Deleting file: %s\r\n", path);
  if (fs.remove(path)) {
    Serial.println("- file deleted");
  } else {
    Serial.println("- delete failed");
  }
}

void testFileIO(fs::FS &fs, const char *path) {
  Serial.printf("Testing file I/O with %s\r\n", path);

  static uint8_t buf[512];
  size_t len = 0;
  File file = fs.open(path, FILE_WRITE);
  if (!file) {
    Serial.println("- failed to open file for writing");
    return;
  }

  size_t i;
  Serial.print("- writing");
  uint32_t start = millis();
  for (i = 0; i < 2048; i++) {
    if ((i & 0x001F) == 0x001F) {
      Serial.print(".");
    }
    file.write(buf, 512);
  }
  Serial.println("");
  uint32_t end = millis() - start;
  Serial.printf(" - %u bytes written in %u ms\r\n", 2048 * 512, end);
  file.close();

  file = fs.open(path);
  start = millis();
  end = start;
  i = 0;
  if (file && !file.isDirectory()) {
    len = file.size();
    size_t flen = len;
    start = millis();
    Serial.print("- reading");
    while (len) {
      size_t toRead = len;
      if (toRead > 512) {
        toRead = 512;
      }
      file.read(buf, toRead);
      if ((i++ & 0x001F) == 0x001F) {
        Serial.print(".");
      }
      len -= toRead;
    }
    Serial.println("");
    end = millis() - start;
    Serial.printf("- %u bytes read in %u ms\r\n", flen, end);
    file.close();
  } else {
    Serial.println("- failed to open file for reading");
  }
}

const char g_rgszFallbackHTML[] PROGMEM = R"rawliteral(<!DOCTYPE HTML>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Configuration Interface</title>
</head>
<body>
  <form method='get' action='setting'>
    <label>
      <h3>WIFI Name (SSID):</h3>
      <input name='ssid' type="text" length=32 placeholder="Enter SSID">
    </label>
    <br>
    <label>
      <h3>WIFI Password:</h3>
      <input name='pass' type="text" length=64 placeholder="Enter password">
    </label>
    <br>
    <input type="submit" value="Save parameters">
  </form>
</body>
</html>)rawliteral";

// When you need to use it:
String g_strFallbackHTML = FPSTR(g_rgszFallbackHTML);

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "time.cloudflare.com");

unsigned long g_u32WeatherUpdateIntervalMilliseconds = 3600000;  // 1 hour

const char *g_pszcSSID = "Oneirodyne";
const char *g_pszcPASS = "Oneirodyne";

const char *g_pszcFirmwareURL = "https://CouDeGras.github.io/Nephelocentaurus/Nephelocentaurus.ino.bin";
const char *g_pszcVersionURL = "https://CouDeGras.github.io/Nephelocentaurus/version.json";
String g_strCurrentVersion = "36.482";  //current firmware version
String g_strNewestVersion = "0";
const char *g_pszcRadioURL = "https://streaming.broadcastradio.com:8572/burnfm";

String g_StrOpenWeatherMapApiKey = "4fb277504a118b9320ba6378abbdaf71";
String g_strCurrencyConversionApiKey = "333f550b03de752a753b1ec4";
String g_strConvertCurrencyFromIndex = "";
String g_strConvertCurrencyToIndex = "CNY";

bool g_bRebootUpdate = 0;

String g_strJSONBuffer;
JsonDocument myObject;

WebServer server(80);

void startNTPClient();
String readStringFromEEPROM(int start, int length);
void anemohiereia_daemon(void *parameter);
String httpGETRequest(const char *serverName);
String httpsGETRequest(const char *serverName);
bool testWifi(void);
void launchWeb(void);
void createWebServer();
void turnOffWiFi();
void turnOnWiFi();
bool downloadAndSaveFileToFFAT(const char *htmlUrl, const char *htmlFilePath);

String keepOnlyASCII(String input) {
  String output = "";
  for (int i = 0; i < input.length(); i++) {
    char c = input[i];
    if (c >= 0 && c <= 127) {
      output += c;
    }
  }
  return output;
}

DynamicJsonDocument g_jsdocOTAFileSystem(1024);
bool g_bResourceDownloaded = 0;
void checkForOTAUpdate() {
  lv_scr_load(ui_ota);
  lv_refr_now(NULL);
  Serial.println("Firmware version: " + g_strCurrentVersion);
  HTTPClient http;
  Serial.print("Checking firmware updates at: ");
  Serial.println(g_pszcVersionURL);
  http.begin(g_pszcVersionURL);
  int httpCode = http.GET();
  if (httpCode > 0) {
    if (httpCode == HTTP_CODE_OK) {
      String strNewestVersionJson = http.getString();
      Serial.println(strNewestVersionJson);
      DeserializationError error = deserializeJson(g_jsdocOTAFileSystem, strNewestVersionJson);
      if (error) {
        Serial.print("deserializeJson() failed: ");
        Serial.println(error.c_str());
      } else {
        g_pszcFirmwareURL = String(g_jsdocOTAFileSystem["resources"]["firmware"]["url"].as<String>()).c_str();
        g_strNewestVersion = String(g_jsdocOTAFileSystem["resources"]["firmware"]["version"].as<String>());
      }
    } else {
      Serial.print("HTTP request failed with error code: ");
      Serial.println(httpCode);
    }
  } else {
    Serial.println("HTTP request failed.");
  }
  http.end();
  if (!g_bResourceDownloaded) PerformFileSystemOTAUpdate();
}

bool PerformFileSystemOTAUpdate() {
  lv_scr_load(ui_ota);
  lv_refr_now(NULL);
  const char *versionUrl = "https://raw.githubusercontent.com/CouDeGras/Nephelocentaurus/main/version.json";
  DynamicJsonDocument localJson(1024);
  DynamicJsonDocument remoteJson(1024);

  Serial.println("Starting OTA update check...");

  // Download remote version.json
  if (!downloadAndSaveFileToFFAT(versionUrl, "/temp_version.json")) {
    Serial.println("Failed to download remote version.json");
    return false;
  }

  // Read and parse remote version.json
  String remoteJsonStr = readFile(FFat, "/temp_version.json");
  if (remoteJsonStr.length() == 0) {
    Serial.println("Failed to read remote version.json");
    return false;
  }

  DeserializationError remoteError = deserializeJson(remoteJson, remoteJsonStr);
  FFat.remove("/temp_version.json");

  if (remoteError) {
    Serial.println("Failed to parse remote version.json");
    return false;
  }

  // Parse local version.json if it exists
  if (FFat.exists("/version.json")) {
    String localJsonStr = readFile(FFat, "/version.json");
    if (localJsonStr.length() > 0) {
      DeserializationError localError = deserializeJson(localJson, localJsonStr);
      if (localError) {
        Serial.println("Failed to parse local version.json");
      }
    }
  }

  // Update files
  const char *filesToUpdate[] = { "index", "font" };
  bool updatedAny = false;
  for (const char *file : filesToUpdate) {
    float remoteVersion = remoteJson["resources"][file]["version"].as<float>();
    float localVersion = localJson["resources"][file]["version"].as<float>();
    Serial.printf("Checking %s: Local version %.2f, Remote version %.2f\n", file, localVersion, remoteVersion);

    if (!FFat.exists(String("/") + file + (strcmp(file, "font") == 0 ? ".ttf" : ".html")) || remoteVersion > localVersion || !g_bResourceDownloaded) {
      String fileUrl = remoteJson["resources"][file]["url"].as<String>();
      String filePath = String("/") + file + (strcmp(file, "font") == 0 ? ".ttf" : ".html");
      Serial.printf("Updating %s\n", filePath.c_str());
      if (!downloadAndSaveFileToFFAT(fileUrl.c_str(), filePath.c_str())) {
        Serial.printf("Failed to update %s\n", filePath.c_str());
        return false;
      }
      updatedAny = true;
    }
  }

  // Update local version.json if any file was updated
  if (updatedAny) {
    String jsonString;
    serializeJson(remoteJson, jsonString);
    if (!saveJsonToFFat(jsonString, "/version.json")) {
      Serial.println("Failed to update local version.json");
      return false;
    }

    // Verify that the local version.json was updated correctly
    String verifiedJsonStr = readFile(FFat, "/version.json");
    if (verifiedJsonStr.length() > 0) {
      DynamicJsonDocument verifiedJson(1024);
      DeserializationError verifiedError = deserializeJson(verifiedJson, verifiedJsonStr);
      if (!verifiedError && verifiedJson["resources"]["index"]["version"] == remoteJson["resources"]["index"]["version"]) {
        Serial.println("Local version.json updated and verified successfully");
      } else {
        Serial.println("Failed to verify local version.json update");
        return false;
      }
    } else {
      Serial.println("Failed to read updated local version.json");
      return false;
    }
  } else {
    Serial.println("No updates were necessary");
    return false;
  }

  Serial.println("Update check completed successfully.");
  return true;
}

void PerformBinaryOTAUpdate() {
  PerformFileSystemOTAUpdate();
  HTTPClient http;
  http.begin(g_pszcFirmwareURL);
  int httpCode = http.GET();
  if (httpCode == HTTP_CODE_OK) {
    int len = http.getSize();
    if (Update.begin(len)) {
      size_t written = Update.writeStream(http.getStream());
      while (written < len) {
        written += Update.writeStream(http.getStream());
        esp_task_wdt_reset();  // Feed the watchdog
      }
      if (Update.end(true)) {
        Serial.println("Update complete");
        ESP.restart();
      } else {
        Serial.printf("Update failed: %s\n", Update.errorString());
      }
    } else {
      Serial.println("Not enough space for update");
    }
  } else {
    Serial.printf("HTTP request failed: %d\n", httpCode);
  }
  http.end();
}

void downloadAndSaveFileToSPIFFS(const char *htmlUrl, const char *htmlFilePath) {
  HTTPClient http;
  http.begin(htmlUrl);
  int httpCode = http.GET();

  if (httpCode == HTTP_CODE_OK) {
    WiFiClient *stream = http.getStreamPtr();
    File file = SPIFFS.open(htmlFilePath, FILE_WRITE);
    if (file) {
      uint8_t buffer[128] = { 0 };
      int len = http.getSize();
      int bytesRead = 0;

      while (http.connected() && (len > 0 || len == -1)) {
        size_t size = stream->available();
        if (size) {
          int c = stream->readBytes(buffer, ((size > sizeof(buffer)) ? sizeof(buffer) : size));
          file.write(buffer, c);
          bytesRead += c;
          if (len > 0) {
            len -= c;
          }
          esp_task_wdt_reset();  // Feed the watchdog
        }
      }
      file.close();
      Serial.println("HTML file saved to SPIFFS");
    } else {
      Serial.println("Failed to open file for writing");
    }
  } else {
    Serial.printf("HTTP request failed: %d\n", httpCode);
  }
  http.end();
}


String readFileFromSPIFFS(const char *path) {
  String fileContent = "";
  File file = SPIFFS.open(path, FILE_READ);
  if (file) {
    fileContent = file.readString();
    file.close();
  } else {
    Serial.printf("Failed to open file: %s\n", path);
  }
  return fileContent;
}


bool saveJsonToFFat(const String &jsonString, const char *filePath) {
  File file = FFat.open(filePath, FILE_WRITE);
  if (!file) {
    Serial.println("Failed to open config file for writing");
    return false;
  }

  size_t bytesWritten = file.print(jsonString);
  file.close();

  if (bytesWritten == jsonString.length()) {
    Serial.println("Config file saved successfully");
    return true;
  } else {
    Serial.println("Config file write failed");
    return false;
  }
}

bool downloadAndSaveFileToFFAT(const char *url, const char *filePath) {
  const int maxRetries = 3;
  int retryCount = 0;
  while (retryCount < maxRetries) {
    String urlString = String(url);
    bool isHttps = urlString.startsWith("https://");
    if (isHttps) {
      WiFiClientSecure *client = new WiFiClientSecure;
      if (client) {
        client->setInsecure();  // Skip certificate verification
        HTTPClient https;
        Serial.printf("[HTTPS] Attempt %d: Connecting to %s\n", retryCount + 1, url);
        if (https.begin(*client, url)) {
          int httpCode = https.GET();
          if (httpCode > 0) {
            if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
              File file = FFat.open(filePath, FILE_WRITE);
              if (file) {
                https.writeToStream(&file);
                file.close();
                Serial.println("File saved to FFat");
                https.end();
                delete client;
                return true;  // Success
              } else {
                Serial.println("Failed to open file for writing");
              }
            }
          } else {
            Serial.printf("[HTTPS] GET failed, error: %s\n", https.errorToString(httpCode).c_str());
          }
          https.end();
        } else {
          Serial.println("[HTTPS] Unable to connect");
        }
        delete client;
      } else {
        Serial.println("Unable to create client");
      }
    } else {
      HTTPClient http;
      Serial.printf("[HTTP] Attempt %d: Connecting to %s\n", retryCount + 1, url);
      http.begin(url);
      int httpCode = http.GET();
      if (httpCode == HTTP_CODE_OK) {
        File file = FFat.open(filePath, FILE_WRITE);
        if (file) {
          http.writeToStream(&file);
          file.close();
          Serial.println("File saved to FFat");
          http.end();
          return true;  // Success
        } else {
          Serial.println("Failed to open file for writing");
        }
      } else {
        Serial.printf("HTTP request failed: %d\n", httpCode);
      }
      http.end();
    }
    retryCount++;
    if (retryCount < maxRetries) {
      Serial.printf("Retrying in 5 seconds... (Attempt %d/%d)\n", retryCount + 1, maxRetries);
      vTaskDelay(pdMS_TO_TICKS(5000));  // Wait for 5 seconds before retrying
    }
  }
  Serial.println("Max retries reached. Download failed.");
  return false;  // Failure after all retries
}

void printResourcesTask(void *parameter) {
  for (;;) {
    size_t freeHeapSize = xPortGetFreeHeapSize();
    Serial.print("Free Heap Memory: ");
    Serial.print(freeHeapSize);
    Serial.println(" bytes");
    vTaskDelay(pdMS_TO_TICKS(60000));  // Delay for 5 seconds
  }
}

const char *remote_host = "www.cloudflare.com";  // Replace with the hostname you want to ping
bool connexio = 0;
void connectivityCheckTask(void *pvParameters) {
  while (1) {
    vTaskDelay(5000 / portTICK_PERIOD_MS);

    // Ping Host
    Serial.println("Ping: " + String(remote_host));
    if (Ping.ping(remote_host) > 0) {
      connexio = 1;
      Serial.println("Ping: Avg response time : " + String(Ping.averageTime()));
    } else {
      connexio = 0;
      Serial.println("Ping Failed");
    }
    vTaskDelay(pdMS_TO_TICKS(600000));
  }
}

// Structure definition
struct locale_list {
  String city;         // City name
  String region;       // Region name
  String lat, lon;     // Coordinates
  String temperature;  // Current temperature
  String humidity;     // Humidity percentage
  String condition;    // Weather condition
  int offset;
  unsigned long lastUpdate = 0;

  bool needsUpdate() {
    return ((millis() - lastUpdate) >= 3600000) || (lastUpdate == 0);
  }

  void updateStamp() {
    lastUpdate = millis();
  }

  String getToponym() {
    return capitalizeWords(city);
  }
};
// Global variables
locale_list locations[3];
// External function to update locale data
void updateLocaleData(int locale_page, bool fullUpdate = false) {
  if (WiFi.status() == WL_CONNECTED) {
    String serverPath;
    if (locale_page == 0) {
      // Get general location data
      serverPath = "http://ip-api.com/json/?fields=lat,lon,offset,city,regionName,country,currency";
      g_strJSONBuffer = httpGETRequest(serverPath.c_str());
      Serial.println(g_strJSONBuffer);
      deserializeJson(myObject, g_strJSONBuffer);

      // Update primary locale data
      locations[locale_page].city = String((const char *)myObject["city"]);
      locations[locale_page].region = String((const char *)myObject["regionName"]);
      //      locations[locale_page].currency = String((const char *)myObject["currency"]);
      locations[locale_page].lat = String(myObject["lat"].as<float>(), 3);
      locations[locale_page].lon = String(myObject["lon"].as<float>(), 3);
    }
    serverPath = "https://nominatim.openstreetmap.org/reverse?lat=" + locations[locale_page].lat + "&lon=" + locations[locale_page].lon + "&format=json";
    g_strJSONBuffer = httpsGETRequest(serverPath.c_str());
    deserializeJson(myObject, g_strJSONBuffer);
    if (g_strJSONBuffer.length() == 0) {
      Serial.println("Error: Empty response from server.");
    } else {
      Serial.println(g_strJSONBuffer);

      DeserializationError error = deserializeJson(myObject, g_strJSONBuffer);

      if (error) {
        Serial.print("Deserialization failed: ");
        Serial.println(error.c_str());
      } else {
        // Check if "address" and "city" fields exist to prevent core panic
        if (myObject["address"].containsKey("city")) {
          locations[locale_page].city = String((const char *)myObject["address"]["city"]);
        } else {
          Serial.println("City field is missing in the JSON response.");
          locations[locale_page].city = "Unknown";
        }
      }
    }
    // Fetch weather data only if a full update or primary locale
    serverPath = "http://api.openweathermap.org/data/3.0/onecall?lat=" + locations[locale_page].lat + "&lon=" + locations[locale_page].lon + "&exclude=hourly,minutely,alerts&appid=" + g_StrOpenWeatherMapApiKey;
    g_strJSONBuffer = httpGETRequest(serverPath.c_str());
    Serial.println(g_strJSONBuffer);
    deserializeJson(myObject, g_strJSONBuffer);
    int time_offset = myObject["timezone_offset"];
    timeClient.setTimeOffset(time_offset);
    // Update specific weather data for locale
    locations[locale_page].offset = time_offset;
    locations[locale_page].condition = String((const char *)myObject["current"]["weather"][0]["description"]);
    locations[locale_page].temperature = String(myObject["current"]["temp"].as<float>() - 273.15, 0);
    locations[locale_page].humidity = String(myObject["current"]["humidity"].as<int>());
    locations[locale_page].updateStamp();
  }
}

volatile bool button1Pressed = false;
volatile bool button2Pressed = false;
volatile unsigned long button1PressTime = 0;
volatile unsigned long button2PressTime = 0;
const uint32_t debounceThreshold = 20;  // Debounce time in milliseconds

void IRAM_ATTR button1Interrupt() {
  static uint32_t lastInterruptTime = 0;
  uint32_t interruptTime = millis();

  if (interruptTime - lastInterruptTime > debounceThreshold) {
    if (digitalRead(BUTTON1_PIN) == LOW) {
      button1Pressed = true;
      button1PressTime = interruptTime;
    } else {
      button1Pressed = false;
    }
  }
  lastInterruptTime = interruptTime;
}

void IRAM_ATTR button2Interrupt() {
  static uint32_t lastInterruptTime = 0;
  uint32_t interruptTime = millis();

  if (interruptTime - lastInterruptTime > debounceThreshold) {
    if (digitalRead(BUTTON2_PIN) == LOW) {
      button2Pressed = true;
      button2PressTime = interruptTime;
    } else {
      button2Pressed = false;
    }
  }
  lastInterruptTime = interruptTime;
}

#define MODE_COUNT 4
#define MAX_SUBPAGES 3

struct UIState {
  uint8_t currentMode;
  uint8_t currentSubPage[MODE_COUNT];
};

volatile UIState uiState = { 0, { 0, 0, 0, 0 } };
long UIupdateInterval = 50;

void changeMode(bool increment) {
  UIupdateInterval = 1;
  if (increment) {
    uiState.currentMode++;
    if (uiState.currentMode >= MODE_COUNT) {
      uiState.currentMode = 0;
    }
  } else {
    if (uiState.currentMode == 0) {
      uiState.currentMode = MODE_COUNT - 1;
    } else {
      uiState.currentMode--;
    }
  }

  uiState.currentSubPage[uiState.currentMode] = 0;

  Serial.print("Mode: ");
  Serial.print(uiState.currentMode);
  Serial.print(" page: ");
  Serial.println(uiState.currentSubPage[uiState.currentMode]);
}

void changePage(bool increment) {
  UIupdateInterval = 1;
  if (increment) {
    uiState.currentSubPage[uiState.currentMode]++;
    if (uiState.currentSubPage[uiState.currentMode] >= MAX_SUBPAGES) {
      uiState.currentSubPage[uiState.currentMode] = 0;
    }
  } else {
    if (uiState.currentSubPage[uiState.currentMode] == 0) {
      uiState.currentSubPage[uiState.currentMode] = MAX_SUBPAGES - 1;
    } else {
      uiState.currentSubPage[uiState.currentMode]--;
    }
  }

  Serial.print("Mode: ");
  Serial.print(uiState.currentMode);
  Serial.print(" page: ");
  Serial.println(uiState.currentSubPage[uiState.currentMode]);
}

void buttonTask(void *parameter) {
  pinMode(BUTTON1_PIN, INPUT_PULLUP);
  pinMode(BUTTON2_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BUTTON1_PIN), button1Interrupt, CHANGE);
  attachInterrupt(digitalPinToInterrupt(BUTTON2_PIN), button2Interrupt, CHANGE);

  for (;;) {
    taskYIELD();

    if (!button1Pressed && button1PressTime != 0) {
      uint32_t releaseTime = millis();
      uint32_t pressDuration = releaseTime - button1PressTime;
      Serial.print("Button 1 press time: ");
      Serial.print(pressDuration);
      Serial.println(" ms");

      if (pressDuration < 500) {
        changePage(true);  // Short press: Increment subpage
      } else {
        changeMode(true);  // Long press: Increment mode
      }

      button1PressTime = 0;
    }

    if (!button2Pressed && button2PressTime != 0) {
      uint32_t releaseTime = millis();
      uint32_t pressDuration = releaseTime - button2PressTime;
      Serial.print("Button 2 press time: ");
      Serial.print(pressDuration);
      Serial.println(" ms");

      if (pressDuration < 500) {
        changePage(false);  // Short press: Decrement subpage
      } else {
        changeMode(false);  // Long press: Decrement mode
      }

      button2PressTime = 0;
    }

    vTaskDelay(pdMS_TO_TICKS(10));
  }
}

/*
String readStringFromEEPROM(int start, int length) {
  String value = "";
  for (int i = 0; i < length; ++i) {
    char c = char(EEPROM.read(start + i));
    // Check if character is printable ASCII and not a null terminator
    if (c >= 32 && c <= 126) {
      value += c;
    }
  }
  value.trim();  // Remove any leading/trailing whitespace
  return value;
}*/

String g_strExchange_rate;
unsigned long currencylastUpdateTime = 0;

bool updateExchangeRate() {
  String serverPath = "https://v6.exchangerate-api.com/v6/" + g_strCurrencyConversionApiKey + "/latest/" + g_strConvertCurrencyFromIndex;
  String jsonBuffer = httpsGETRequest(serverPath.c_str());
  Serial.println(jsonBuffer);
  DynamicJsonDocument myObject(1024);
  DeserializationError error = deserializeJson(myObject, jsonBuffer);
  if (error) {
    Serial.print("deserializeJson() failed: ");
    Serial.println(error.c_str());
    g_strExchange_rate = "Error";
    return false;
  } else {
    if (myObject.containsKey("conversion_rates") && myObject["conversion_rates"].containsKey(g_strConvertCurrencyToIndex)) {
      g_strExchange_rate = String(myObject["conversion_rates"][g_strConvertCurrencyToIndex].as<float>(), 2);
      currencylastUpdateTime = millis();
      return true;
    } else {
      Serial.println("Rate not found in JSON response");
      g_strExchange_rate = "N/A";
      return false;
    }
  }
}

bool checkAndUpdateExchangeRate() {
  int currentHour = timeClient.getHours();
  int currentMinute = timeClient.getMinutes();
  // Update if it's 9AM or if 24 hours have passed since the last update
  if ((currentHour == 9) || (currencylastUpdateTime == 0)) {
    return updateExchangeRate();
  }
  return false;  // No update was needed
}


// RTOS task daemon, performing periodic updates
void anemohiereia_daemon(void *parameter) {
  for (;;) {
    taskYIELD();

    // Default partial update for primary locale
    updateLocaleData(uiState.currentSubPage[uiState.currentMode]);
    while (!timeClient.update() || !timeClient.forceUpdate()) {
      Serial.println("Forcing NTP update.");
      vTaskDelay(10000 / portTICK_PERIOD_MS);
    }
    Serial.println(timeClient.getFormattedTime());
    // Delay for the set update interval
    vTaskDelay(g_u32WeatherUpdateIntervalMilliseconds / portTICK_PERIOD_MS);
  }
}


String capitalizeWords(String description) {
  bool capitalizeNext = true;  // Flag to indicate when to capitalize

  for (int i = 0; i < description.length(); i++) {
    if (isWhitespace(description[i])) {
      capitalizeNext = true;  // Next character should be capitalized
    } else if (capitalizeNext && isAlpha(description[i])) {
      description[i] = toupper(description[i]);  // Capitalize the character
      capitalizeNext = false;                    // Reset the flag
    } else {
      description[i] = tolower(description[i]);  // Convert the character to lowercase
    }
  }

  return description;
}

// Helper function to check if the character is a letter
bool isAlpha(char c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

// Helper function to check if the character is whitespace
bool isWhitespace(char c) {
  return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

void lvgl_ui() {
  // Check if in the main mode
  if (uiState.currentMode == 0) {
    if (locations[uiState.currentSubPage[uiState.currentMode]].needsUpdate()) updateLocaleData(uiState.currentSubPage[uiState.currentMode]);
    timeClient.setTimeOffset(locations[uiState.currentSubPage[uiState.currentMode]].offset);
    // Update time
    String hours = String(timeClient.getHours());
    String minutes = String(timeClient.getMinutes());
    if (minutes.length() < 2) minutes = "0" + minutes;
    lv_label_set_text(ui_time, (hours + ":" + minutes).c_str());

    // Update location name
    lv_label_set_text(ui_geolocation, locations[uiState.currentSubPage[uiState.currentMode]].getToponym().c_str());

    // Update weather description
    lv_label_set_text(ui_weather, capitalizeWords(locations[uiState.currentSubPage[uiState.currentMode]].condition).c_str());

    // Update temperature and humidity
    lv_label_set_text(ui_temperature,
                      (locations[uiState.currentSubPage[uiState.currentMode]].temperature + "°C  " + locations[uiState.currentSubPage[uiState.currentMode]].humidity + "%").c_str());

  } else if (uiState.currentMode == 2) {
    checkForOTAUpdate();
    PerformBinaryOTAUpdate();
    uiState.currentMode = 0;
  } else {
    tft.fillScreen(GC9A01A_BLUE);
  }

  lv_refr_now(NULL);  // Flush
}


void nephelocentaurus_daemon(void *parameter) {
  for (;;) {  // FreeRTOS task loop
    // Get the current time
    taskYIELD();
    lvgl_ui();
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}

String httpGETRequest(const char *serverName) {
  WiFiClient client;
  HTTPClient http;
  http.begin(client, serverName);
  int httpResponseCode = http.GET();
  String payload = "{}";
  if (httpResponseCode > 0) {
    Serial.print("HTTP Response code: ");
    Serial.println(httpResponseCode);
    payload = http.getString();
  } else {
    Serial.print("Error code: ");
    Serial.println(httpResponseCode);
    g_bRebootUpdate = 0;
  }
  http.end();
  return payload;
}

String httpsGETRequest(const char *serverName) {
  WiFiClientSecure *client = new WiFiClientSecure;
  client->setInsecure();  // Only use this for testing, not in production
  HTTPClient https;

  String payload = "{}";

  Serial.print("[HTTPS] begin...\n");
  if (https.begin(*client, serverName)) {  // HTTPS
    https.addHeader("Accept-Language", "en");
    Serial.print("[HTTPS] GET...\n");
    int httpCode = https.GET();

    if (httpCode > 0) {
      Serial.printf("[HTTPS] GET... code: %d\n", httpCode);
      if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
        payload = https.getString();
      }
    } else {
      Serial.printf("[HTTPS] GET... failed, error: %s\n", https.errorToString(httpCode).c_str());
    }

    https.end();
  } else {
    Serial.printf("[HTTPS] Unable to connect\n");
  }

  delete client;
  return payload;
}
/*
void clearEEPROM() {
  // Clear EEPROM data
  for (int i = 0; i < EEPROM_SIZE; i++) {
    EEPROM.write(i, 0);
  }
  EEPROM.commit();
}


void writeStringToEEPROM(int startAddress, const String &value, int maxLength) {
  // Clear the section of EEPROM
  for (int i = 0; i < maxLength; ++i) {
    EEPROM.write(startAddress + i, 0);
  }

  // Write the new value
  int bytesWritten = 0;
  for (int i = 0; i < value.length() && bytesWritten < maxLength; ++i) {
    char c = value[i];
    EEPROM.write(startAddress + bytesWritten, c);
    bytesWritten++;

    // If it's a multi-byte character, write the additional bytes
    if ((c & 0x80) != 0) {  // It's a multi-byte character
      while ((c & 0xC0) != 0xC0 && bytesWritten < maxLength) {
        c = value[++i];
        EEPROM.write(startAddress + bytesWritten, c);
        bytesWritten++;
      }
    }
  }
}
*/

String g_strIndexContentHTML;
String g_strSuccessContentHTML;

void createWebServer() {
  server.on("/", []() {
    if (g_strIndexContentHTML.length() > 1)
      server.send(200, "text/html", g_strIndexContentHTML);
    else server.send(200, "text/html", g_strFallbackHTML);
  });
  server.on("/font.ttf", HTTP_GET, []() {
    Serial.println("Received request for font.ttf");
    if (FFat.exists("/font.ttf")) {
      Serial.println("Font file exists in FFat");
      File file = FFat.open("/font.ttf", "r");
      if (file) {
        size_t fileSize = file.size();
        Serial.printf("File opened successfully, size: %d bytes\n", fileSize);
        if (fileSize > 0) {
          Serial.println("File size is non-zero, attempting to send");
          server.sendHeader("Content-Type", "font/ttf");
          server.sendHeader("Content-Length", String(fileSize));
          size_t sent = server.streamFile(file, "font/ttf");
          file.close();
          Serial.printf("Total bytes sent: %d\n", sent);
          if (sent != fileSize) {
            Serial.printf("WARNING: Total sent (%d) doesn't match file size (%d)\n", sent, fileSize);
          }
        } else {
          Serial.println("Font file is empty");
          server.send(500, "text/plain", "Font file is empty");
        }
      } else {
        Serial.println("Failed to open font file");
        server.send(500, "text/plain", "Error opening font file");
      }
    } else {
      Serial.println("Font file not found in FFat");
      server.send(404, "text/plain", "Font file not found");
    }
  });
  server.on("/reset", []() {
    saveJsonToFFat("", "/config.json");
    String redirectHTML = "<!DOCTYPE HTML><html><head><meta http-equiv=\"refresh\" content=\"0; url=/\"></head></html>";
    server.send(200, "text/html", redirectHTML);
  });
  server.onNotFound([]() {
    String message = "NOT_FOUND: ";

    switch (server.method()) {
      case HTTP_GET:
        message += "GET";
        break;
      case HTTP_POST:
        message += "POST";
        break;
      case HTTP_DELETE:
        message += "DELETE";
        break;
      case HTTP_PUT:
        message += "PUT";
        break;
      case HTTP_PATCH:
        message += "PATCH";
        break;
      case HTTP_HEAD:
        message += "HEAD";
        break;
      case HTTP_OPTIONS:
        message += "OPTIONS";
        break;
      default:
        message += "UNKNOWN";
    }

    message += " http://" + server.hostHeader() + server.uri() + "\n";

    if (server.hasArg("plain")) {
      message += "_CONTENT_LENGTH: " + String(server.arg("plain").length()) + "\n";
    }

    for (int i = 0; i < server.headers(); i++) {
      message += "_HEADER[" + server.headerName(i) + "]: " + server.header(i) + "\n";
    }

    for (int i = 0; i < server.args(); i++) {
      if (server.argName(i) != "plain") {
        message += "_GET[" + server.argName(i) + "]: " + server.arg(i) + "\n";
      } else {
        message += "_POST: " + server.arg(i) + "\n";
      }
    }

    Serial.print(message);
    server.send(404, "text/plain", "404: Not Found");
  });
  server.on("/setting", HTTP_POST, []() {
    String jsonPayload = server.arg("plain");
    Serial.println("Received JSON payload: " + jsonPayload);

    DynamicJsonDocument doc(1024);
    DeserializationError error = deserializeJson(doc, jsonPayload);

    if (error) {
      Serial.print(F("deserializeJson() failed: "));
      Serial.println(error.c_str());
      server.send(400, "application/json", "{\"success\": false, \"message\": \"Invalid JSON\"}");
      return;
    }
    bool savedSuccessfully = saveJsonToFFat(jsonPayload, "/config.json");

    if (savedSuccessfully) {
      Serial.println("Saved configuration:");
      Serial.println(jsonPayload);

      String jsonResponse = "{\"success\": true, \"message\": \"Settings saved successfully. The device will now restart.\", \"config\": " + jsonPayload + "}";
      server.send(200, "application/json", jsonResponse);

      delay(100);
      ESP.restart();
    } else {
      server.send(500, "application/json", "{\"success\": false, \"message\": \"Failed to save settings.\"}");
    }
  });
}

void connectToWiFi(unsigned long timeoutMs) {
  unsigned long startAttemptTime = millis();
  // Keep trying to connect until timeout
  while (wifiMulti.run() != WL_CONNECTED) {
    if (millis() - startAttemptTime >= timeoutMs) {
      Serial.println("Failed to connect to WiFi.");
      connexio = 0;
      return;
    }

    Serial.print(".");
    delay(500);
  }
  Serial.println("\nConnected to WiFi.");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void setup() {
  Serial.begin(115200);         // Initialize Logger Monitor
  esp_task_wdt_init(60, true);  // Set watchdog timeout to 30 seconds
  tft.begin();
  tft.setRotation(1);
  lv_init();
  static lv_color_t buf1[240 * 10];
  static lv_color_t buf2[240 * 10];
  static lv_draw_buf_t draw_buf;
  lv_draw_buf_init(&draw_buf, 240, 10, LV_COLOR_FORMAT_RGB565, 240 * sizeof(lv_color_t), buf1, sizeof(buf1));
  static lv_display_t *disp = lv_display_create(240, 240);
  lv_display_set_flush_cb(disp, my_disp_flush);
  lv_display_set_draw_buffers(disp, &draw_buf, NULL);
  ui_init();
  ui_Conn_screen_init();
  lv_scr_load(ui_Conn);
  lv_timer_handler();
  lv_refr_now(NULL);  // Flush
  ui_Main_screen_init();
  ui_ConnFailed_screen_init();
  ui_Sync_screen_init();
  ui_ota_screen_init();
  String mac = String((uint32_t)(ESP.getEfuseMac() >> 32), HEX) + String((uint32_t)(ESP.getEfuseMac()), HEX);
  mac.toUpperCase();
  String uniqueIdStr = "Nephelocentaurus_" + mac;
  Serial.println("LVGL Ready");

  Serial.println("Disconnecting previously connected WiFi");
  WiFi.disconnect();
  delay(100);  // Ensure WiFi disconnect is complete

#if defined(USE_SPIFFS)
  if (SPIFFS.begin()) {
    Serial.println("SPIFFS mounted successfully");
    Serial.printf("SPIFFS Total space: %10u\n", SPIFFS.totalBytes());
    //Serial.printf("SPIFFS Free space: %10u\n", SPIFFS.freeBytes());
    listDir(SPIFFS, "/", 0);
    g_strIndexContentHTML = readFile(SPIFFS, "/index.html");
  } else {
    Serial.println("SPIFFS mount failed");
    return;
  }
#else
  if (FFat.begin()) {
    Serial.println("FFat mounted successfully");
    Serial.printf("FFAT Total space: %10u\n", FFat.totalBytes());
    Serial.printf("FFAT Free space: %10u\n", FFat.freeBytes());
    listDir(FFat, "/", 0);
    if (FFat.exists("/index.html")) {
      g_strIndexContentHTML = readFile(FFat, "/index.html");
      g_bResourceDownloaded = 1;
    } else {
      g_bResourceDownloaded = 0;
    }
  } else {
    Serial.println("FFat mount failed. Attempting to format...");
    if (FFat.format()) {
      Serial.println("FFat formatted successfully. Trying to mount again...");
      if (FFat.begin()) {
        Serial.println("FFat mounted successfully after formatting");
        Serial.printf("FFAT Total space: %10u\n", FFat.totalBytes());
        Serial.printf("FFAT Free space: %10u\n", FFat.freeBytes());
        g_bResourceDownloaded = 0;
      } else {
        Serial.println("FFat mount failed even after formatting");
        return;
      }
    } else {
      Serial.println("FFat format failed");
      return;
    }
  }
#endif
  WiFi.mode(WIFI_AP_STA);
  WiFi.softAP(uniqueIdStr.c_str(), "");
  // Assuming you have these global variables defined
  String eeprom_ssid;
  String eeprom_pass;
  String weather_api_key;

  Serial.println("Reading Config");
  String jsonConfig = readFile(FFat, "/config.json");
  if (jsonConfig.length() > 0) {
    g_bResourceDownloaded = 1;
    StaticJsonDocument<1024> doc;
    DeserializationError error = deserializeJson(doc, jsonConfig);

    if (error) {
      Serial.print("deserializeJson() failed: ");
      Serial.println(error.c_str());
    } else {
      eeprom_ssid = doc["ssid"] | "";
      eeprom_pass = keepOnlyASCII(doc["pass"] | "");
      locations[0].lat = keepOnlyASCII(doc["primary_lat"] | "");
      locations[0].lon = keepOnlyASCII(doc["primary_lon"] | "");
      locations[1].lat = keepOnlyASCII(doc["secondary_lat"] | "");
      locations[1].lon = keepOnlyASCII(doc["secondary_lon"] | "");
      locations[2].lat = keepOnlyASCII(doc["tertiary_lat"] | "");
      locations[2].lon = keepOnlyASCII(doc["tertiary_lon"] | "");
      weather_api_key = keepOnlyASCII(doc["weather_api_key"] | "");

      if (eeprom_ssid.length() > 0) {
        g_pszcSSID = eeprom_ssid.c_str();
        g_pszcPASS = eeprom_pass.c_str();
      }
      Serial.println(g_pszcSSID);
      if (weather_api_key.length() > 1) g_StrOpenWeatherMapApiKey = weather_api_key;
    }
  } else {
    Serial.println("No config file found or empty config");
    //    g_bResourceDownloaded = 0;
  }
  Serial.print("Connecting to: ");
  Serial.print(g_pszcSSID);
  Serial.print(" with password: ");
  Serial.println(g_pszcPASS);
  wifiMulti.addAP(g_pszcSSID, g_pszcPASS);
  wifiMulti.run();
  createWebServer();
  server.begin();
#if defined(USE_SPIFFS)
  server.serveStatic("/font.ttf", SPIFFS, "/font.ttf", "font/ttf");
#else
  server.serveStatic("/font.ttf", FFat, "/font.ttf", "font/ttf");
#endif

  Serial.println("Server started");
  connectToWiFi(30000);
  checkForOTAUpdate();
  //xTaskCreate(nephelocentaurus_daemon, "ui task", 65536, NULL, 3, NULL);
  xTaskCreate(anemohiereia_daemon, "updater task", 9012, NULL, 1, NULL);
  xTaskCreate(buttonTask, "button task", 2048, NULL, 1, NULL);
  //updateExchangeRate();
  xTaskCreate(printResourcesTask, "Print Resources", 2048, NULL, 1, NULL);
  xTaskCreate(connectivityCheckTask, "ConnectivityCheck", 9012, NULL, 1, NULL);
}

void loop() {
  server.handleClient();  // Handle web server client requests
  lv_timer_handler();
  if (connexio) lv_scr_load(ui_Main);
  else if (WiFi.status() == WL_CONNECTED && !connexio) lv_scr_load(ui_Sync);
  else if (WiFi.status() != WL_CONNECTED) lv_scr_load(ui_ConnFailed);
  lvgl_ui();
  yield();
}
