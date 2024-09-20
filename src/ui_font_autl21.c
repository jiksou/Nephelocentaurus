/*******************************************************************************
 * Size: 21 px
 * Bpp: 1
 * Opts: --bpp 1 --size 21 --font C:/Users/yisuf/SquareLine/assets/Author-Light.otf -o C:/Users/yisuf/SquareLine/assets\ui_font_autl21.c --format lvgl -r 0x20-0xff --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_AUTL21
#define UI_FONT_AUTL21 1
#endif

#if UI_FONT_AUTL21

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x10,

    /* U+0022 "\"" */
    0x99, 0x99,

    /* U+0023 "#" */
    0x12, 0x9, 0x4, 0x8f, 0xf2, 0x21, 0x10, 0x90,
    0x48, 0xff, 0x12, 0x11, 0x8, 0x80,

    /* U+0024 "$" */
    0x8, 0x8, 0x3e, 0xc0, 0x80, 0x80, 0x40, 0x20,
    0x1c, 0x3, 0x1, 0x1, 0x83, 0x7e, 0x10, 0x10,

    /* U+0025 "%" */
    0x70, 0x44, 0xc2, 0x22, 0x21, 0x12, 0x8, 0x90,
    0x4d, 0x39, 0xcb, 0x20, 0x91, 0x8, 0x88, 0x44,
    0x44, 0x36, 0x40, 0xe0,

    /* U+0026 "&" */
    0x1f, 0x3, 0x10, 0x20, 0x2, 0x0, 0x30, 0x5,
    0x2, 0x8c, 0x28, 0x22, 0x81, 0x48, 0xc, 0x41,
    0xe3, 0xe3,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x12, 0x44, 0x48, 0x88, 0x88, 0x88, 0x44, 0x42,
    0x10,

    /* U+0029 ")" */
    0x84, 0x42, 0x21, 0x11, 0x11, 0x11, 0x22, 0x44,
    0x80,

    /* U+002A "*" */
    0x10, 0x23, 0x59, 0xc2, 0x88, 0x80,

    /* U+002B "+" */
    0x8, 0x4, 0x2, 0x1, 0xf, 0xf8, 0x40, 0x20,
    0x10, 0x8, 0x0,

    /* U+002C "," */
    0x55, 0x80,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x1, 0x2, 0x2, 0x4, 0x4, 0x4, 0x8, 0x8,
    0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x80,

    /* U+0030 "0" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81, 0x81,
    0xc3, 0x42, 0x3c,

    /* U+0031 "1" */
    0x3d, 0x11, 0x11, 0x11, 0x11,

    /* U+0032 "2" */
    0x7c, 0x3, 0x1, 0x1, 0x1, 0x2, 0x4, 0x18,
    0x60, 0xff,

    /* U+0033 "3" */
    0xff, 0x2, 0x4, 0x8, 0x10, 0x3c, 0x2, 0x1,
    0x1, 0x1, 0x2, 0x7c,

    /* U+0034 "4" */
    0x8, 0x8, 0x4, 0x4, 0x2, 0x22, 0x11, 0x9,
    0x4, 0xff, 0x81, 0x0, 0x80, 0x40,

    /* U+0035 "5" */
    0x7e, 0x40, 0x40, 0x40, 0x40, 0x7c, 0x2, 0x1,
    0x1, 0x1, 0x82, 0x7c,

    /* U+0036 "6" */
    0x6, 0x8, 0x10, 0x20, 0x60, 0x7c, 0xc2, 0x81,
    0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0037 "7" */
    0xff, 0x1, 0x2, 0x2, 0x4, 0x4, 0x8, 0x8,
    0x10, 0x10, 0x20, 0x20,

    /* U+0038 "8" */
    0x3c, 0xc3, 0x81, 0x81, 0x42, 0x3c, 0x24, 0x42,
    0x81, 0x81, 0xc3, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3e,
    0x6, 0x4, 0x8, 0x10, 0x60,

    /* U+003A ":" */
    0x80, 0x80,

    /* U+003B ";" */
    0x40, 0x1, 0x5a,

    /* U+003C "<" */
    0x1, 0x83, 0x6, 0x1c, 0xc, 0x1, 0x80, 0x30,
    0x7,

    /* U+003D "=" */
    0xff, 0x80, 0x0, 0x0, 0xf, 0xf8,

    /* U+003E ">" */
    0x80, 0x38, 0x3, 0x0, 0x60, 0x18, 0x70, 0xc1,
    0x80,

    /* U+003F "?" */
    0xf8, 0x8, 0x8, 0x10, 0x20, 0x8e, 0x10, 0x0,
    0x0, 0x1, 0x0,

    /* U+0040 "@" */
    0x3, 0xf0, 0x6, 0x6, 0xc, 0x0, 0x84, 0x0,
    0x24, 0x3d, 0x1e, 0x21, 0x86, 0x20, 0x43, 0x10,
    0x61, 0x88, 0x20, 0xc4, 0x10, 0xa3, 0x14, 0xd8,
    0xf3, 0xc4, 0x0, 0x1, 0x0, 0x0, 0x60, 0x0,
    0xf, 0xc0,

    /* U+0041 "A" */
    0x6, 0x0, 0xc0, 0x28, 0x4, 0x81, 0x10, 0x21,
    0x8, 0x21, 0xfe, 0x20, 0x48, 0x9, 0x0, 0xc0,
    0x10,

    /* U+0042 "B" */
    0xfe, 0x41, 0xa0, 0x50, 0x28, 0x27, 0xf2, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x5f, 0xc0,

    /* U+0043 "C" */
    0xf, 0x86, 0x9, 0x0, 0x60, 0x8, 0x1, 0x0,
    0x20, 0x4, 0x0, 0xc0, 0xc, 0x0, 0xc1, 0x87,
    0xc0,

    /* U+0044 "D" */
    0xfc, 0x20, 0xc8, 0xa, 0x3, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0xe0, 0x28, 0x33, 0xf0,

    /* U+0045 "E" */
    0xfe, 0x80, 0x80, 0x80, 0x80, 0xfc, 0x80, 0x80,
    0x80, 0x80, 0x80, 0xff,

    /* U+0046 "F" */
    0xff, 0x2, 0x4, 0x8, 0x10, 0x3f, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0047 "G" */
    0xf, 0xc6, 0xd, 0x0, 0x60, 0x8, 0x1, 0x0,
    0x20, 0xc, 0x1, 0x40, 0x2c, 0x4, 0xc0, 0x87,
    0xe0,

    /* U+0048 "H" */
    0x80, 0x60, 0x18, 0x6, 0x1, 0x80, 0x7f, 0xf8,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x6, 0x1,

    /* U+0049 "I" */
    0xff, 0xf0,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x11, 0x11, 0x3e,

    /* U+004B "K" */
    0x81, 0xc1, 0xa0, 0x90, 0x88, 0x84, 0x82, 0xe1,
    0x90, 0x84, 0x41, 0x20, 0x50, 0x10,

    /* U+004C "L" */
    0x81, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81,
    0x2, 0x7, 0xf0,

    /* U+004D "M" */
    0x80, 0x1c, 0x3, 0xc0, 0x3a, 0x5, 0xa0, 0x59,
    0x9, 0x89, 0x18, 0x91, 0x86, 0x18, 0x61, 0x80,
    0x18, 0x1,

    /* U+004E "N" */
    0x80, 0x70, 0x1a, 0x6, 0x41, 0x90, 0x62, 0x18,
    0x46, 0x9, 0x82, 0x60, 0x58, 0xe, 0x1,

    /* U+004F "O" */
    0xf, 0x81, 0x83, 0x18, 0x4, 0x80, 0x28, 0x0,
    0xc0, 0x6, 0x0, 0x30, 0x1, 0x40, 0x12, 0x0,
    0x8c, 0x18, 0x1f, 0x0,

    /* U+0050 "P" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x81, 0x82, 0xfc,
    0x80, 0x80, 0x80, 0x80,

    /* U+0051 "Q" */
    0xf, 0x81, 0x83, 0x18, 0x4, 0x80, 0x28, 0x0,
    0xc0, 0x6, 0x0, 0x30, 0x1, 0xc0, 0x12, 0x0,
    0x8c, 0x18, 0x1f, 0x0, 0x10, 0x0, 0x60, 0x0,
    0xc0,

    /* U+0052 "R" */
    0xfc, 0x41, 0x20, 0x50, 0x28, 0x14, 0x13, 0xf1,
    0x18, 0x84, 0x41, 0x20, 0xd0, 0x20,

    /* U+0053 "S" */
    0x3e, 0xc0, 0x80, 0x80, 0xc0, 0x30, 0xc, 0x3,
    0x1, 0x1, 0x83, 0x7c,

    /* U+0054 "T" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+0055 "U" */
    0x80, 0x60, 0x18, 0x6, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x70, 0x36, 0x18, 0xfc,

    /* U+0056 "V" */
    0x80, 0x28, 0x5, 0x1, 0x10, 0x22, 0x8, 0x21,
    0x4, 0x20, 0x88, 0x9, 0x1, 0x40, 0x18, 0x2,
    0x0,

    /* U+0057 "W" */
    0x80, 0x1, 0x81, 0x81, 0x81, 0x81, 0x42, 0x82,
    0x42, 0x42, 0x42, 0x42, 0x24, 0x44, 0x24, 0x24,
    0x24, 0x24, 0x18, 0x28, 0x18, 0x18, 0x18, 0x18,

    /* U+0058 "X" */
    0x80, 0x50, 0x22, 0x10, 0x48, 0x12, 0x3, 0x0,
    0xc0, 0x48, 0x21, 0x8, 0x44, 0xa, 0x1,

    /* U+0059 "Y" */
    0x40, 0x48, 0x8, 0x82, 0x8, 0x81, 0x10, 0x14,
    0x3, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x2,
    0x0,

    /* U+005A "Z" */
    0xff, 0xc0, 0x20, 0x10, 0x8, 0x6, 0x1, 0x0,
    0x80, 0x40, 0x20, 0x10, 0xc, 0x3, 0xff,

    /* U+005B "[" */
    0xf8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0xf0,

    /* U+005C "\\" */
    0x40, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x8,
    0x8, 0x4, 0x4, 0x2, 0x2, 0x1, 0x1,

    /* U+005D "]" */
    0xf1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0xf0,

    /* U+005E "^" */
    0x8, 0xa, 0x5, 0x4, 0x82, 0x21, 0x11, 0x4,
    0x82, 0x80, 0x80,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0060 "`" */
    0x88, 0x80,

    /* U+0061 "a" */
    0x3e, 0x43, 0x1, 0x1, 0x7d, 0xc3, 0x81, 0xc3,
    0x7d,

    /* U+0062 "b" */
    0x80, 0x80, 0x80, 0x80, 0xbc, 0xc2, 0x83, 0x81,
    0x81, 0x81, 0x83, 0x86, 0x7c,

    /* U+0063 "c" */
    0x1e, 0x61, 0xc0, 0x80, 0x80, 0x80, 0xc0, 0x61,
    0x1e,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x1, 0x3f, 0x61, 0xc1, 0x81,
    0x81, 0x81, 0x81, 0x63, 0x3d,

    /* U+0065 "e" */
    0x3c, 0x42, 0x81, 0x81, 0xff, 0x80, 0x80, 0x61,
    0x3e,

    /* U+0066 "f" */
    0x3b, 0x10, 0x8f, 0xa1, 0x8, 0x42, 0x10, 0x84,
    0x0,

    /* U+0067 "g" */
    0x3f, 0xb1, 0x10, 0x48, 0x24, 0x11, 0xb0, 0x20,
    0x20, 0x3f, 0x0, 0xc0, 0x30, 0x37, 0xf0,

    /* U+0068 "h" */
    0x80, 0x80, 0x80, 0x80, 0x9e, 0xe3, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x81,

    /* U+0069 "i" */
    0x9f, 0xf8,

    /* U+006A "j" */
    0x41, 0x55, 0x55, 0x56,

    /* U+006B "k" */
    0x80, 0x80, 0x80, 0x80, 0x82, 0x84, 0x88, 0x90,
    0xb0, 0xd8, 0x8c, 0x86, 0x82,

    /* U+006C "l" */
    0xff, 0xf8,

    /* U+006D "m" */
    0xbc, 0xf6, 0x38, 0xe0, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0x8, 0x30, 0x41, 0x82, 0x8,

    /* U+006E "n" */
    0x9e, 0xe3, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81,

    /* U+006F "o" */
    0x3e, 0x31, 0xb0, 0x70, 0x18, 0xc, 0x7, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+0070 "p" */
    0xbc, 0xc2, 0x83, 0x81, 0x81, 0x81, 0x83, 0x86,
    0xfc, 0x80, 0x80, 0x80, 0x80,

    /* U+0071 "q" */
    0x3f, 0x61, 0xc1, 0x81, 0x81, 0x81, 0x81, 0x63,
    0x3d, 0x1, 0x1, 0x1, 0x1,

    /* U+0072 "r" */
    0xbe, 0x21, 0x8, 0x42, 0x10, 0x80,

    /* U+0073 "s" */
    0x7f, 0x8, 0x10, 0x30, 0x30, 0x43, 0xf8,

    /* U+0074 "t" */
    0x42, 0x3e, 0x84, 0x21, 0x8, 0x42, 0xe,

    /* U+0075 "u" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xc3,
    0x79,

    /* U+0076 "v" */
    0x40, 0xa0, 0x90, 0x44, 0x42, 0x20, 0x90, 0x50,
    0x28, 0x8, 0x0,

    /* U+0077 "w" */
    0x40, 0x5, 0x4, 0x14, 0x28, 0x88, 0xa2, 0x24,
    0x88, 0x91, 0x41, 0x45, 0x6, 0x14, 0x8, 0x20,

    /* U+0078 "x" */
    0x41, 0x11, 0x4, 0x82, 0x80, 0x80, 0xa0, 0x88,
    0x42, 0x41, 0x0,

    /* U+0079 "y" */
    0x80, 0xa0, 0x90, 0x44, 0x42, 0x20, 0x90, 0x50,
    0x18, 0x8, 0x4, 0x4, 0x4, 0x4, 0x0,

    /* U+007A "z" */
    0xff, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0xc0,
    0xff,

    /* U+007B "{" */
    0x3a, 0x10, 0x82, 0x8, 0x42, 0xe1, 0x84, 0x22,
    0x21, 0x8, 0x38,

    /* U+007C "|" */
    0xff, 0xff, 0x80,

    /* U+007D "}" */
    0xe0, 0x84, 0x22, 0x21, 0x8, 0x3b, 0x10, 0x82,
    0x8, 0x42, 0xe0,

    /* U+007E "~" */
    0x78, 0xc7, 0x80,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0x8f, 0xf0,

    /* U+00A2 "¢" */
    0x8, 0x8, 0x3e, 0x60, 0xc0, 0x80, 0x80, 0x80,
    0xc0, 0x61, 0x3e, 0x8, 0x8,

    /* U+00A3 "£" */
    0x1e, 0x60, 0x40, 0x40, 0x40, 0xfe, 0x20, 0x10,
    0x10, 0x10, 0x20, 0xff,

    /* U+00A4 "¤" */
    0x81, 0x7e, 0x42, 0x81, 0x81, 0x81, 0x42, 0x7e,
    0x81,

    /* U+00A5 "¥" */
    0x80, 0xa0, 0x90, 0x44, 0x41, 0x40, 0xa1, 0xfc,
    0x10, 0x7f, 0x4, 0x2, 0x1, 0x0,

    /* U+00A6 "¦" */
    0xfc, 0x1f, 0x80,

    /* U+00A7 "§" */
    0x3e, 0x60, 0x40, 0x60, 0x38, 0xc6, 0x81, 0x81,
    0x42, 0x3c, 0xc, 0x4, 0x4, 0x78,

    /* U+00A8 "¨" */
    0x90,

    /* U+00A9 "©" */
    0xf, 0x81, 0x83, 0x11, 0xc5, 0x91, 0x29, 0x0,
    0xc8, 0x6, 0x40, 0x31, 0x1, 0xc7, 0x12, 0x0,
    0x8c, 0x18, 0x1f, 0x0,

    /* U+00AA "ª" */
    0x70, 0x43, 0xf8, 0xfc,

    /* U+00AB "«" */
    0x11, 0x22, 0x44, 0x88, 0x88, 0x44, 0x22, 0x11,

    /* U+00AC "¬" */
    0xff, 0x80, 0x40, 0x20, 0x10, 0x8,

    /* U+00AD "­" */
    0x0,

    /* U+00AE "®" */
    0x3e, 0x31, 0xb7, 0x72, 0x99, 0x8c, 0xc7, 0x56,
    0xc6, 0x3e, 0x0,

    /* U+00AF "¯" */
    0xf8,

    /* U+00B0 "°" */
    0x74, 0x63, 0x17, 0x0,

    /* U+00B1 "±" */
    0x8, 0x4, 0x2, 0x1f, 0xf0, 0x80, 0x40, 0x20,
    0x0, 0x0, 0x7f, 0xc0,

    /* U+00B2 "²" */
    0x70, 0x42, 0x26, 0x7c,

    /* U+00B3 "³" */
    0xf2, 0xe1, 0x1e,

    /* U+00B4 "´" */
    0x6a, 0x0,

    /* U+00B6 "¶" */
    0x3f, 0x7d, 0x7d, 0xfd, 0x7d, 0x7d, 0x3d, 0x5,
    0x5, 0x5, 0x5, 0x5, 0x5, 0x5,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x47, 0x1e,

    /* U+00B9 "¹" */
    0x65, 0x8, 0x42, 0x7c,

    /* U+00BA "º" */
    0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+00BB "»" */
    0x88, 0x44, 0x22, 0x11, 0x11, 0x22, 0x44, 0x88,

    /* U+00BC "¼" */
    0x20, 0x23, 0x81, 0x2, 0x8, 0x8, 0x20, 0x21,
    0x0, 0x84, 0xf, 0xa2, 0x1, 0x8, 0x4, 0x48,
    0x21, 0x20, 0x87, 0xc4, 0x2, 0x0, 0x8,

    /* U+00BD "½" */
    0x60, 0x45, 0x4, 0x8, 0x20, 0x42, 0x2, 0x10,
    0x11, 0x3b, 0xe8, 0x20, 0x81, 0x8, 0x10, 0x41,
    0x4, 0x10, 0x20, 0xf0,

    /* U+00BE "¾" */
    0xf0, 0x81, 0x4, 0x10, 0x41, 0xc2, 0x1, 0x20,
    0x9, 0x3, 0x91, 0x0, 0x88, 0x8, 0x90, 0x44,
    0x84, 0x3e, 0x40, 0x22, 0x1, 0x0,

    /* U+00BF "¿" */
    0x8, 0x0, 0x0, 0x0, 0x81, 0x1c, 0x40, 0x81,
    0x1, 0x1, 0xf0,

    /* U+00C0 "À" */
    0x8, 0x0, 0x80, 0x0, 0x3, 0x0, 0x60, 0x14,
    0x2, 0x40, 0x88, 0x10, 0x84, 0x10, 0xff, 0x10,
    0x24, 0x4, 0x80, 0x60, 0x8,

    /* U+00C1 "Á" */
    0x1, 0x0, 0x40, 0x0, 0x3, 0x0, 0x60, 0x14,
    0x2, 0x40, 0x88, 0x10, 0x84, 0x10, 0xff, 0x10,
    0x24, 0x4, 0x80, 0x60, 0x8,

    /* U+00C2 "Â" */
    0x4, 0x1, 0x60, 0x0, 0x3, 0x0, 0x60, 0x14,
    0x2, 0x40, 0x88, 0x10, 0x84, 0x10, 0xff, 0x10,
    0x24, 0x4, 0x80, 0x60, 0x8,

    /* U+00C3 "Ã" */
    0x1c, 0x81, 0x38, 0x0, 0x0, 0x60, 0x6, 0x0,
    0x90, 0x9, 0x1, 0x8, 0x10, 0x82, 0x8, 0x3f,
    0xc2, 0x4, 0x40, 0x24, 0x2, 0x80, 0x10,

    /* U+00C4 "Ä" */
    0x9, 0x0, 0x0, 0x18, 0x3, 0x0, 0xa0, 0x12,
    0x4, 0x40, 0x84, 0x20, 0x87, 0xf8, 0x81, 0x20,
    0x24, 0x3, 0x0, 0x40,

    /* U+00C5 "Å" */
    0xe, 0x0, 0x90, 0xf, 0x0, 0x0, 0x6, 0x0,
    0x60, 0x9, 0x0, 0x90, 0x11, 0x1, 0x8, 0x20,
    0x83, 0xfc, 0x20, 0x44, 0x2, 0x40, 0x28, 0x1,

    /* U+00C6 "Æ" */
    0x7, 0xfe, 0x4, 0x80, 0x8, 0x80, 0x8, 0x80,
    0x10, 0x80, 0x1f, 0xfc, 0x20, 0x80, 0x20, 0x80,
    0x20, 0x80, 0x40, 0x80, 0x40, 0x80, 0x80, 0xff,

    /* U+00C7 "Ç" */
    0xf, 0x86, 0x9, 0x0, 0x60, 0x8, 0x1, 0x0,
    0x20, 0x4, 0x0, 0x40, 0x8, 0x0, 0xc1, 0x87,
    0xe0, 0x40, 0xe, 0x0, 0x40, 0x70,

    /* U+00C8 "È" */
    0x20, 0x10, 0x0, 0xfe, 0x80, 0x80, 0x80, 0x80,
    0xfc, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+00C9 "É" */
    0x8, 0x10, 0x0, 0xfe, 0x80, 0x80, 0x80, 0x80,
    0xfc, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+00CA "Ê" */
    0x10, 0x2c, 0x0, 0xfe, 0x80, 0x80, 0x80, 0x80,
    0xfc, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+00CB "Ë" */
    0x24, 0x0, 0xfe, 0x80, 0x80, 0x80, 0x80, 0xfc,
    0x80, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+00CC "Ì" */
    0x91, 0x55, 0x55, 0x54,

    /* U+00CD "Í" */
    0x62, 0xaa, 0xaa, 0xa8,

    /* U+00CE "Î" */
    0x54, 0x24, 0x92, 0x49, 0x24, 0x90,

    /* U+00CF "Ï" */
    0xb0, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,

    /* U+00D0 "Ð" */
    0x7e, 0x8, 0x31, 0x1, 0x20, 0x34, 0x3, 0xf0,
    0x50, 0xa, 0x1, 0x40, 0x68, 0x9, 0x6, 0x3f,
    0x0,

    /* U+00D1 "Ñ" */
    0x39, 0x9, 0xc0, 0x2, 0x1, 0xc0, 0x68, 0x19,
    0x6, 0x41, 0x88, 0x61, 0x18, 0x26, 0x9, 0x81,
    0x60, 0x38, 0x4,

    /* U+00D2 "Ò" */
    0x4, 0x0, 0x10, 0x0, 0x0, 0x1f, 0x3, 0x6,
    0x30, 0x9, 0x0, 0x50, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x2, 0x80, 0x24, 0x1, 0x18, 0x30, 0x3e,
    0x0,

    /* U+00D3 "Ó" */
    0x1, 0x0, 0x10, 0x0, 0x0, 0x1f, 0x3, 0x6,
    0x30, 0x9, 0x0, 0x50, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x2, 0x80, 0x24, 0x1, 0x18, 0x30, 0x3e,
    0x0,

    /* U+00D4 "Ô" */
    0x2, 0x0, 0x28, 0x0, 0x0, 0x1f, 0x3, 0x6,
    0x30, 0x9, 0x0, 0x50, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x2, 0x80, 0x24, 0x1, 0x18, 0x30, 0x3e,
    0x0,

    /* U+00D5 "Õ" */
    0x1c, 0x80, 0x9c, 0x0, 0x0, 0x1f, 0x3, 0x6,
    0x30, 0x9, 0x0, 0x50, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x2, 0x80, 0x24, 0x1, 0x18, 0x30, 0x3e,
    0x0,

    /* U+00D6 "Ö" */
    0x9, 0x0, 0x0, 0x3, 0xe0, 0x60, 0xc6, 0x1,
    0x20, 0xa, 0x0, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x50, 0x4, 0x80, 0x23, 0x6, 0x7, 0xc0,

    /* U+00D7 "×" */
    0x83, 0x8d, 0xa1, 0x82, 0x88, 0xa0, 0x80,

    /* U+00D8 "Ø" */
    0x0, 0x10, 0x0, 0x83, 0xe8, 0x60, 0xc6, 0x7,
    0x60, 0x4a, 0x4, 0x30, 0x41, 0x82, 0xc, 0x20,
    0x52, 0x6, 0xa0, 0x23, 0x6, 0x17, 0xc1, 0x0,
    0x8, 0x0,

    /* U+00D9 "Ù" */
    0x18, 0x2, 0x0, 0x2, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x6, 0x1, 0xc0,
    0xd8, 0x63, 0xf0,

    /* U+00DA "Ú" */
    0x6, 0x2, 0x0, 0x2, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x6, 0x1, 0xc0,
    0xd8, 0x63, 0xf0,

    /* U+00DB "Û" */
    0xc, 0x4, 0x80, 0x2, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x6, 0x1, 0xc0,
    0xd8, 0x63, 0xf0,

    /* U+00DC "Ü" */
    0x13, 0x0, 0x8, 0x6, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x7, 0x3, 0x61,
    0x8f, 0xc0,

    /* U+00DD "Ý" */
    0x2, 0x0, 0x80, 0x0, 0x20, 0x24, 0x4, 0x41,
    0x4, 0x40, 0x88, 0xa, 0x1, 0x80, 0x10, 0x2,
    0x0, 0x40, 0x8, 0x1, 0x0,

    /* U+00DE "Þ" */
    0x80, 0x80, 0xfc, 0x82, 0x81, 0x81, 0x81, 0x81,
    0x82, 0xfc, 0x80, 0x80,

    /* U+00DF "ß" */
    0x78, 0xc4, 0x84, 0x84, 0x88, 0x88, 0x88, 0x84,
    0x82, 0x81, 0x81, 0x81, 0x9e,

    /* U+00E0 "à" */
    0x20, 0x10, 0x8, 0x0, 0x3e, 0x43, 0x1, 0x1,
    0x7d, 0xc3, 0x81, 0xc3, 0x7d,

    /* U+00E1 "á" */
    0x4, 0xc, 0x8, 0x0, 0x3e, 0x43, 0x1, 0x1,
    0x7d, 0xc3, 0x81, 0xc3, 0x7d,

    /* U+00E2 "â" */
    0x18, 0x24, 0x22, 0x0, 0x3e, 0x43, 0x1, 0x1,
    0x7d, 0xc3, 0x81, 0xc3, 0x7d,

    /* U+00E3 "ã" */
    0x72, 0x9c, 0x1, 0xe4, 0x60, 0x40, 0xbd, 0xc7,
    0x6, 0x1b, 0xd0,

    /* U+00E4 "ä" */
    0x24, 0x0, 0x0, 0x0, 0x3e, 0x43, 0x1, 0x1,
    0x7d, 0xc3, 0x81, 0xc3, 0x7d,

    /* U+00E5 "å" */
    0x18, 0x24, 0x24, 0x18, 0x0, 0x3e, 0x43, 0x1,
    0x1, 0x7d, 0xc3, 0x81, 0xc3, 0x7d,

    /* U+00E6 "æ" */
    0x3e, 0x78, 0x85, 0x8, 0x4, 0x8, 0x8, 0x17,
    0xff, 0xf8, 0x20, 0x20, 0x40, 0x60, 0xe1, 0x7e,
    0x3c,

    /* U+00E7 "ç" */
    0x1e, 0x61, 0xc0, 0x80, 0x80, 0x80, 0xc0, 0x61,
    0x3e, 0x8, 0xe, 0x2, 0x1c,

    /* U+00E8 "è" */
    0x20, 0x10, 0x0, 0x0, 0x3c, 0x42, 0x81, 0x81,
    0xff, 0x80, 0x80, 0x61, 0x3e,

    /* U+00E9 "é" */
    0x4, 0x4, 0x8, 0x0, 0x3c, 0x42, 0x81, 0x81,
    0xff, 0x80, 0x80, 0x61, 0x3e,

    /* U+00EA "ê" */
    0x18, 0x24, 0x22, 0x0, 0x3c, 0x42, 0x81, 0x81,
    0xff, 0x80, 0x80, 0x61, 0x3e,

    /* U+00EB "ë" */
    0x24, 0x0, 0x0, 0x0, 0x3c, 0x42, 0x81, 0x81,
    0xff, 0x80, 0x80, 0x61, 0x3e,

    /* U+00EC "ì" */
    0x88, 0x82, 0x49, 0x24, 0x92,

    /* U+00ED "í" */
    0x2a, 0x9, 0x24, 0x92, 0x48,

    /* U+00EE "î" */
    0x22, 0x80, 0x2, 0x10, 0x84, 0x21, 0x8, 0x42,
    0x0,

    /* U+00EF "ï" */
    0xa0, 0x24, 0x92, 0x49, 0x24,

    /* U+00F0 "ð" */
    0x6c, 0x8, 0x1a, 0x0, 0xc3, 0xe3, 0xb, 0x7,
    0x1, 0x80, 0xc0, 0x70, 0x2c, 0x23, 0xe0,

    /* U+00F1 "ñ" */
    0x72, 0x4e, 0x0, 0x9e, 0xe3, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81,

    /* U+00F2 "ò" */
    0x20, 0x8, 0x2, 0x0, 0x3, 0xe3, 0x1b, 0x7,
    0x1, 0x80, 0xc0, 0x70, 0x6c, 0x63, 0xe0,

    /* U+00F3 "ó" */
    0x2, 0x2, 0x2, 0x0, 0x3, 0xe3, 0x1b, 0x7,
    0x1, 0x80, 0xc0, 0x70, 0x6c, 0x63, 0xe0,

    /* U+00F4 "ô" */
    0x8, 0xa, 0x8, 0x80, 0x3, 0xe3, 0x1b, 0x7,
    0x1, 0x80, 0xc0, 0x70, 0x6c, 0x63, 0xe0,

    /* U+00F5 "õ" */
    0x71, 0x27, 0x80, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xe0, 0xd8, 0xc7, 0xc0,

    /* U+00F6 "ö" */
    0x12, 0x0, 0x0, 0x0, 0x3, 0xe3, 0x1b, 0x7,
    0x1, 0x80, 0xc0, 0x70, 0x6c, 0x63, 0xe0,

    /* U+00F7 "÷" */
    0x8, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x20,

    /* U+00F8 "ø" */
    0x0, 0x80, 0x8f, 0x4c, 0x6c, 0x54, 0x26, 0x23,
    0x21, 0x61, 0xb1, 0x97, 0x88, 0x8, 0x0,

    /* U+00F9 "ù" */
    0x20, 0x10, 0x8, 0x0, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0xc3, 0x79,

    /* U+00FA "ú" */
    0x4, 0x8, 0x8, 0x0, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0xc3, 0x79,

    /* U+00FB "û" */
    0x18, 0x24, 0x42, 0x0, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0xc3, 0x79,

    /* U+00FC "ü" */
    0x24, 0x0, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0xc3, 0x7d,

    /* U+00FD "ý" */
    0x2, 0x2, 0x2, 0x0, 0x8, 0xa, 0x9, 0x4,
    0x44, 0x22, 0x9, 0x5, 0x1, 0x80, 0x80, 0x40,
    0x40, 0x40, 0x40, 0x0,

    /* U+00FE "þ" */
    0x80, 0x80, 0x80, 0x80, 0xbc, 0xc2, 0x83, 0x81,
    0x81, 0x81, 0x83, 0x86, 0xfc, 0x80, 0x80, 0x80,
    0x80,

    /* U+00FF "ÿ" */
    0x24, 0x0, 0x0, 0x0, 0x81, 0x82, 0x42, 0x42,
    0x24, 0x24, 0x28, 0x18, 0x18, 0x10, 0x30, 0x60,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 67, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 87, .box_w = 1, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 103, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 5, .adv_w = 175, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 175, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 35, .adv_w = 240, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 200, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 58, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 74, .adv_w = 85, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 83, .adv_w = 85, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 92, .adv_w = 126, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 98, .adv_w = 175, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 109, .adv_w = 54, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 111, .adv_w = 101, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 112, .adv_w = 54, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 111, .box_w = 8, .box_h = 15, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 128, .adv_w = 164, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 103, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 152, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 160, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 166, .adv_w = 170, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 180, .adv_w = 159, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 192, .adv_w = 171, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 217, .adv_w = 169, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 171, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 242, .adv_w = 62, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 62, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 247, .adv_w = 175, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 256, .adv_w = 175, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 262, .adv_w = 175, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 271, .adv_w = 138, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 286, .box_w = 17, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 316, .adv_w = 188, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 177, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 191, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 203, .box_w = 10, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 209, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 206, .box_w = 10, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 64, .box_w = 1, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 95, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 181, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 247, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 206, .box_w = 10, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 225, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 169, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 225, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 557, .adv_w = 176, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 155, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 169, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 202, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 185, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 288, .box_w = 16, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 193, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 176, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 685, .adv_w = 182, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 98, .box_w = 4, .box_h = 17, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 709, .adv_w = 111, .box_w = 8, .box_h = 15, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 724, .adv_w = 98, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 733, .adv_w = 175, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 744, .adv_w = 153, .box_w = 10, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 746, .adv_w = 168, .box_w = 3, .box_h = 3, .ofs_x = 4, .ofs_y = 10},
    {.bitmap_index = 748, .adv_w = 152, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 165, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 165, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 792, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 91, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 146, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 825, .adv_w = 169, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 59, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 840, .adv_w = 59, .box_w = 2, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 844, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 59, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 267, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 170, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 894, .adv_w = 165, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 907, .adv_w = 165, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 920, .adv_w = 103, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 926, .adv_w = 130, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 933, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 167, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 148, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 238, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 976, .adv_w = 148, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 987, .adv_w = 148, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1002, .adv_w = 144, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1011, .adv_w = 104, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1022, .adv_w = 65, .box_w = 1, .box_h = 17, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1025, .adv_w = 104, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1036, .adv_w = 175, .box_w = 9, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1039, .adv_w = 67, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 87, .box_w = 1, .box_h = 12, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1042, .adv_w = 175, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1055, .adv_w = 175, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1067, .adv_w = 175, .box_w = 8, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1076, .adv_w = 175, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1090, .adv_w = 65, .box_w = 1, .box_h = 17, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1093, .adv_w = 175, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1107, .adv_w = 168, .box_w = 4, .box_h = 1, .ofs_x = 3, .ofs_y = 11},
    {.bitmap_index = 1108, .adv_w = 241, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1128, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1132, .adv_w = 161, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1140, .adv_w = 176, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1146, .adv_w = 126, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1147, .adv_w = 172, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1158, .adv_w = 168, .box_w = 5, .box_h = 1, .ofs_x = 3, .ofs_y = 11},
    {.bitmap_index = 1159, .adv_w = 100, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1163, .adv_w = 175, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 101, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1179, .adv_w = 101, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1182, .adv_w = 168, .box_w = 3, .box_h = 3, .ofs_x = 4, .ofs_y = 10},
    {.bitmap_index = 1184, .adv_w = 175, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1198, .adv_w = 54, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1199, .adv_w = 168, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 1201, .adv_w = 101, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1205, .adv_w = 115, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1210, .adv_w = 161, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1218, .adv_w = 248, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1241, .adv_w = 248, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1261, .adv_w = 248, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1283, .adv_w = 138, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1294, .adv_w = 188, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1315, .adv_w = 188, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1336, .adv_w = 188, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1357, .adv_w = 188, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1380, .adv_w = 188, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1400, .adv_w = 188, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1424, .adv_w = 259, .box_w = 16, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1448, .adv_w = 191, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1470, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1485, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1500, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1515, .adv_w = 154, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 64, .box_w = 2, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1533, .adv_w = 64, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1537, .adv_w = 64, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1543, .adv_w = 64, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1550, .adv_w = 203, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1567, .adv_w = 206, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1586, .adv_w = 225, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1611, .adv_w = 225, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1636, .adv_w = 225, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1661, .adv_w = 225, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1686, .adv_w = 225, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1709, .adv_w = 175, .box_w = 7, .box_h = 8, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1716, .adv_w = 225, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1742, .adv_w = 202, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1761, .adv_w = 202, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1780, .adv_w = 202, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1799, .adv_w = 202, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1817, .adv_w = 176, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1838, .adv_w = 169, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1850, .adv_w = 157, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1863, .adv_w = 152, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1876, .adv_w = 152, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1889, .adv_w = 152, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1902, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1913, .adv_w = 152, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1926, .adv_w = 152, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1940, .adv_w = 258, .box_w = 15, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1957, .adv_w = 146, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1970, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1983, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1996, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2009, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2022, .adv_w = 59, .box_w = 3, .box_h = 13, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2027, .adv_w = 59, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2032, .adv_w = 59, .box_w = 5, .box_h = 13, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2041, .adv_w = 59, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2046, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2061, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2073, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2088, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2103, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2118, .adv_w = 170, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2132, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2147, .adv_w = 175, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2155, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2170, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2183, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2196, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2209, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2222, .adv_w = 148, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2242, .adv_w = 165, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2259, .adv_w = 148, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = -4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 21, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 182, .range_length = 74, .glyph_id_start = 117,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 2, 0, 0,
    1, 3, 0, 4, 0, 5, 0, 5,
    6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 17, 0, 0, 0,
    0, 0, 18, 19, 20, 21, 22, 23,
    24, 0, 0, 25, 26, 27, 0, 0,
    21, 28, 0, 29, 30, 31, 32, 33,
    34, 35, 36, 37, 38, 39, 0, 0,
    40, 0, 41, 42, 43, 0, 44, 45,
    46, 47, 0, 0, 48, 0, 47, 0,
    49, 42, 50, 51, 52, 53, 54, 55,
    56, 57, 58, 59, 60, 0, 0, 0,
    0, 61, 62, 63, 64, 65, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 68, 18,
    18, 18, 18, 18, 18, 22, 20, 22,
    22, 22, 22, 0, 0, 0, 0, 21,
    0, 21, 21, 21, 21, 21, 0, 21,
    32, 32, 32, 32, 36, 69, 70, 41,
    41, 41, 41, 41, 41, 44, 43, 44,
    44, 44, 44, 0, 0, 0, 0, 0,
    0, 49, 49, 49, 49, 49, 0, 71,
    54, 54, 54, 54, 58, 0, 58
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 2, 0, 0,
    1, 0, 3, 4, 0, 5, 6, 5,
    7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 18, 0, 0, 0,
    0, 0, 19, 0, 20, 0, 0, 0,
    20, 0, 0, 21, 0, 0, 0, 0,
    20, 0, 0, 0, 22, 23, 24, 25,
    26, 27, 28, 29, 0, 30, 31, 0,
    32, 0, 33, 0, 34, 35, 36, 37,
    38, 0, 0, 0, 0, 0, 39, 39,
    40, 41, 42, 39, 43, 44, 45, 46,
    47, 48, 49, 50, 0, 0, 51, 0,
    0, 0, 52, 53, 54, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19,
    19, 19, 19, 19, 19, 19, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 20, 20, 20, 20, 0, 20,
    24, 24, 24, 24, 28, 0, 56, 33,
    33, 33, 33, 33, 33, 0, 34, 36,
    36, 36, 36, 0, 0, 0, 0, 0,
    39, 40, 40, 40, 40, 40, 0, 57,
    45, 45, 45, 45, 49, 0, 49
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, -9,
    -11, -10, -13, -18, -18, -15, -5, -12,
    -16, 0, -17, -5, -23, -6, 0, -9,
    0, -2, -5, 0, -9, 0, 0, 0,
    -15, -15, -15, -15, 0, -13, -15, -15,
    -15, -15, -13, 0, -15, 0, 0, -5,
    0, -7, 0, 0, 0, 0, 0, -14,
    -15, 0, 0, 0, 0, 0, 0, 0,
    -8, -17, -14, -20, -11, -15, -12, -18,
    -11, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, -23, -20, -18, -21, -17, -20,
    -13, -18, -22, 0, -14, -10, -16, -15,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, -20, -17, -17, -17, -18, 0,
    -18, -17, -2, -17, -25, -18, -20, -16,
    -18, -17, -1, -20, 0, 0, 0, 0,
    0, -13, -11, 0, 0, 0, 0, 0,
    0, 0, -8, -3, 0, 0, -16, -11,
    -14, 0, -6, -5, 0, -15, -3, -20,
    0, 0, 0, 0, 0, -2, 0, -2,
    0, 0, 0, -11, -10, -10, -8, 0,
    -6, -6, -10, -5, -10, -9, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, -9, -20, -2, -8, -5,
    -8, -15, -22, -14, -18, 0, 0, -2,
    0, 0, -29, -7, -24, -22, 0, -28,
    0, 0, 0, 0, 0, -11, -9, -9,
    -15, -14, -8, -11, -8, -9, 0, -18,
    -14, -25, -24, 0, -25, 0, 0, 0,
    0, 0, 0, -8, -8, 0, 0, 0,
    0, 0, 0, 0, -10, -10, -5, -5,
    -17, -15, -15, 0, -11, -12, 0, -16,
    -4, -20, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -16, -14, -14,
    -13, -1, -17, -14, -14, -13, -14, -18,
    0, -14, -1, -1, -4, 0, -7, 0,
    0, 0, 0, 0, -1, -13, -9, -8,
    -15, -8, -9, -2, -5, 0, -8, -5,
    -11, -6, -6, -5, -9, -3, -6, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -9, -15, -15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, -6, -11, -5, -11, 0, 0, -12,
    -9, -17, -9, -13, -10, -5, -2, -9,
    -6, -13, -8, -8, -6, -9, -5, -8,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, -15, -11, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -14, -9, -12, -6, -14, 0, 0,
    -12, -8, -17, -11, -2, -9, 0, -2,
    -6, 0, -5, -2, -3, -6, -9, -5,
    -8, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -11, -16, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -14, -8, -11, -6, -14, 0,
    0, -13, -11, -18, -2, -5, -11, 0,
    -3, -9, -2, -9, -2, -9, -8, -2,
    -6, -9, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -17,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -15, -9, -14, -8, -14,
    0, 0, -20, -11, -24, -18, -5, -17,
    0, -9, -17, -2, -17, 0, -15, -12,
    -19, -6, -15, -9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -19,
    -24, -17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -22, -15, -15, -12,
    -20, 0, 0, -13, -11, -18, -3, -5,
    -9, 0, -3, -11, -2, -9, 0, -9,
    -8, -5, -6, -9, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -17, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, -10, -14,
    -8, -14, 0, 0, -16, -14, -20, -16,
    -17, -5, -13, -6, -14, -11, -17, -11,
    -12, -11, -15, -9, -12, -14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, -20, -21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -19, -12,
    -17, -11, -18, 0, 0, -5, -8, -11,
    0, -17, -14, -12, -6, 0, 0, 0,
    -13, -11, -11, 0, -6, -5, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, -22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    -13, -17, -8, -8, 0, 0, -12, -11,
    -18, -6, -14, -6, -9, -3, -11, -8,
    -14, -6, -9, -8, -6, -6, -9, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, -17, -18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, -9, -14, -8, -15, 0, 0, -15,
    -14, -20, -5, -16, -12, -12, -5, -8,
    -9, -14, -12, -12, -9, -5, -8, -12,
    -12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, -19, -20, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -17, -12, -15, -11, -17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    -8, -5, -12, -8, -12, -12, -8, -11,
    -14, 0, 0, 0, 0, -2, -22, -3,
    -14, -15, 0, -22, -3, 0, 0, 0,
    -5, -5, -5, -5, 0, -9, -6, -5,
    -6, -5, -3, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    -5, -17, 0, -14, -15, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -10, 0, 0, -21,
    -10, -19, -18, 0, -22, 0, -15, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, -8, -8,
    0, -9, 0, -11, 0, 0, 0, 0,
    0, 0, -4, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, -2,
    -9, -2, -7, -8, -8, -11, -6, -1,
    -6, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -9, 0, -6, 0, 0,
    -14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, -8, 0, -3, 0, 0, 0,
    0, -6, -8, 0, 0, 0, 0, -3,
    -3, 0, 0, 0, 0, 0, -5, -2,
    -6, -8, 0, -6, 0, -6, 0, 0,
    0, 0, 0, 0, -5, 0, -10, -3,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -10, 0,
    -9, -3, -12, -3, -9, -10, -13, -14,
    -11, -3, -8, -10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, -11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -2, 0, 0, 0, 0, 0,
    -3, 0, -9, -9, 0, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -22, -7, -16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    -19, -6, -19, -6, 0, -3, 0, 0,
    0, 0, 0, 0, 0, -32, -7, -4,
    -4, -4, -8, -5, -5, -4, -5, -4,
    -12, -9, -7, -14, -14, -15, -14, -17,
    0, 0, 0, 0, 0, -5, -4, -15,
    0, -16, -8, -9, -5, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, -3, -6, 0, -8, -9, -9, -8,
    -13, -8, -9, -9, 0, -15, -15, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -7, -7, -3, -8,
    -3, -11, 0, 0, 0, 0, 0, 0,
    -5, 0, -5, 0, -2, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, -3, -3, -3, -2,
    0, -5, -8, -2, -9, 0, -6, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -2, 0, -16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -12, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -2, -3, -6, -6, 0,
    -4, -2, -2, 0, -9, -5, -15, -15,
    0, -16, 0, 0, 0, 0, 0, 0,
    -2, 0, -24, 0, -18, -22, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, 0, 0,
    -25, -12, -21, -20, 0, -26, 0, -21,
    -23, 0, 0, -2, -2, 0, -5, -6,
    0, -2, 0, -2, 0, -6, -5, -13,
    -13, 0, -15, 0, -17, 0, 0, 0,
    0, 0, 0, -3, 0, -17, 0, -18,
    -9, -13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, 0, -15,
    0, -6, -5, -3, -6, -13, -8, -12,
    -1, -15, -29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, -14, 0, 0,
    0, 0, 0, 0, -12, 0, -17, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -5,
    0, 0, -12, -8, -10, -13, 0, -15,
    0, -3, -17, 0, 0, -1, -1, -1,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    0, 0, 0, 0, 0, -11, 0, -6,
    -3, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, -2,
    0, 0, -2, -2, -5, 0, -3, -6,
    0, -6, 0, -6, -16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -7, -7, -2, -8, -2, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -29, -24, -23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -22,
    -21, -12, -22, -6, 0, -3, 0, 0,
    0, 0, 0, 0, 0, -34, -11, -11,
    -11, -9, -9, -14, -9, -11, -9, -10,
    -16, -8, -12, -20, -20, -22, -22, -22,
    0, 0, 0, 0, 0, -5, -9, -9,
    0, -5, 0, -7, -3, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, -10, -3, -11, -5, -3, -3, 0,
    -5, -8, -2, -11, 0, -6, -14, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -3, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -24, -19, -19, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -14, -19, -9, -19, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -30,
    -8, -7, -7, -5, 0, -11, -6, -7,
    -6, -7, -12, 0, -9, 0, 0, -3,
    0, -5, 0, 0, 0, 0, 0, -2,
    -5, -2, 0, 0, 0, -22, -17, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -15, -18, -10, -19, -6, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    -29, -8, -5, -5, -5, 0, -9, -5,
    -5, -5, -5, -12, 0, -7, 0, -2,
    -5, 0, -7, 0, 0, 0, 0, 0,
    -5, -5, -6, 0, 0, -3, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -3, -3, -3, -6, -6,
    0, -3, -2, -2, 0, -9, -5, -15,
    -14, 0, -15, 0, -2, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -28,
    -23, -23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -22, -22, -14, -22,
    -8, 0, -2, 0, 0, 0, 0, 0,
    0, 0, -35, -13, -11, -11, -11, -7,
    -15, -11, -11, -11, -11, -18, -8, -12,
    -7, -10, -13, -7, -13, 0, 0, 0,
    0, 0, -5, -11, -9, 0, -2, -2,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -11,
    0, 0, 0, -11, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -3, -3, -2,
    -6, -8, -3, -3, -3, -3, 0, -8,
    -6, -14, -14, 0, -12, 0, -3, 0,
    0, 0, 0, -3, -2, 0, 0, 0,
    0, 0, 0, 0, -15, -22, -18, -18,
    -20, -17, -20, -14, -17, -20, 0, -17,
    -8, -23, -14, 0, -8, 0, 0, 0,
    0, -3, 0, 0, 0, -23, -22, -22,
    -20, -19, 0, -20, -22, -6, -22, -27,
    -18, -24, -26, -28, -28, 0, -30, 0,
    0, 0, 0, 0, -14, -12, 0, 0,
    0, 0, 0, 0, 0, -8, -18, 0,
    0, -5, 0, -13, -6, -11, -15, 0,
    0, -2, 0, 0, -24, -5, -21, -20,
    0, -26, 0, 0, 0, 0, 0, -4,
    -4, -4, -6, 0, 0, -4, 0, -4,
    0, -10, -7, -17, -16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -15, -24,
    -2, 0, -20, 0, -19, -10, -17, -20,
    0, 0, -10, 0, -8, -34, -14, -30,
    -29, 0, -35, 0, 0, 0, 0, -9,
    -22, -21, -20, -8, 0, -3, -22, 0,
    -21, -5, -22, -19, -35, -33, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -18, 0, -20, -15, -8, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, -12, 0,
    -8, -8, -2, -13, -3, -13, -22, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -3, 0,
    -3, -3, -8, 0, 0, 0, 0, 0,
    0, -15, 0, -17, -8, -11, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 0, -10,
    0, -7, -5, -3, -10, 0, -11, -22,
    -22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -2, -7, 0, 0, 0, 0,
    0, 0, -6, 0, -25, -6, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -18, 0, -8, -10, 0, -18, 0, -6,
    -30, -8, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, -16, 0, 0, 0,
    0, 0, 0, -15, 0, -17, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, -10, 0, -7, -5, 0, -10, 0,
    -11, -21, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -30, -20, -17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -12, 0,
    -17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -23, 0, -5, -5, -3,
    0, 0, 0, -5, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -18, 0,
    -20, -14, -8, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, -12, 0, -8, -8,
    0, -13, -3, -13, -22, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -3, 0, -3, -3,
    -8, 0, 0, 0, 0, 0, 0, -8,
    0, -18, -3, 0, -23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -23, -5, -8,
    -9, 0, -16, 0, -2, -28, 0, 0,
    -4, -4, -4, 0, -8, 0, -4, 0,
    -3, 0, 0, -6, 0, 0, 0, 0,
    0, -22, 0, 0, 0, 0, 0, 0,
    -15, 0, -17, -10, -11, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, -11, 0,
    -7, -5, -3, -10, -2, -11, -22, -22,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -2,
    0, -2, -7, 0, 0, 0, 0, 0,
    0, -15, 0, -2, -5, -8, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, -9,
    0, -6, -5, -2, -11, -2, -9, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -6, 0, 0, 0, 0,
    0, 0, 0, 0, -16, 0, -34, -25,
    -24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -12, 0, -17, 0,
    -26, 0, 0, 0, -15, -7, -17, 0,
    -26, -41, 0, -5, -5, -3, 0, 0,
    0, -5, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, -18, 0, 0, 0,
    0, 0, -3, -13, 0, -27, -6, -5,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, -17, 0, -13, -13, -3, -18, -2,
    -11, -29, -14, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, -3, 0, -2,
    0, 0, -2, 0, -2, -14, 0, 0,
    0, 0, 0, 0, -2, 0, -20, 0,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -20, 0, -2, -3, 0, -10,
    0, -1, -28, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, -17, 0,
    0, 0, 0, 0, 0, -15, 0, -18,
    -5, -8, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, -9, 0, -6, -5, -2,
    -11, -2, -7, -20, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    -16, 0, -25, -10, -14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, -11, 0, -20, 0, 0, 0,
    -12, -5, -12, -1, -26, -35, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -19, 0, 0, 0, 0, 0, 0, 0,
    0, -18, 0, -24, -9, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, -10, 0, -20, 0, 0,
    0, -13, -7, -12, -1, -28, -33, -2,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, -17, 0, 0, 0, 0, 0, 0,
    -2, 0, -17, 0, 0, -18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -22, -2,
    0, -2, 0, -8, 0, -1, -28, 0,
    0, -2, -2, -1, 0, -5, 0, -2,
    0, -2, 0, 0, -3, 0, 0, 0,
    0, 0, -18, 0, 0, 0, 0, 0,
    0, 0, 0, -15, 0, -25, -10, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, -10, 0, -20,
    0, 0, 0, -13, -5, -12, 0, -26,
    -33, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, -17, 0, 0, 0, 0,
    0, 0, -7, 0, -20, 0, 0, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -22, -3, -5, -7, 0, -13, 0, -3,
    -30, 0, 0, -2, -2, -2, 0, -5,
    -3, -2, -3, -2, 0, 0, -5, 0,
    0, 0, 0, 0, -20, 0, 0, 0,
    0, -3, -2, 0, 0, 0, 0, 0,
    0, 0, -12, -20, -17, -17, -18, -17,
    -17, -14, -15, -18, 0, -11, -2, -14,
    -11, 0, -6, 0, 0, 0, 0, -3,
    0, 0, 0, -8, -7, -7, -5, -9,
    0, -7, -7, -6, -7, -13, -11, -10,
    -19, -17, -18, 0, -20, 0, 0, 0,
    0, 0, -6, -5, 0, 0, 0, 0,
    0, 0, 0, -11, -18, -15, -22, -17,
    -17, -15, -18, -14, -17, 0, -8, -1,
    -10, -10, -22, -4, -19, -19, -14, -24,
    -15, 0, 0, 0, -6, -4, -4, -4,
    -8, -8, -4, -4, -4, -4, -10, -9,
    -7, -8, -10, -12, -7, -16, 0, 0,
    0, 0, 0, -4, -3, 0, 0, 0,
    0, 0, 0, 0, -10, -17, -10, -21,
    -9, -17, -16, -19, -14, -17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, -21, -11,
    -17, -14, -16, -17, -17, -15, -19, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, -8,
    -5, -12, -11, -11, -9, -8, -8, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    -20, -17, -17, -18, -19, -17, -9, -15,
    -18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, -3, 0, -8, -3, -8, -11, -6,
    -9, -8, 0, 0, 0, 0, 0, -20,
    -2, -10, -11, 0, -19, 0, 0, 0,
    0, 0, -3, -2, -1, 0, -3, -2,
    -3, -2, -2, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -1, 0, 0, 0, 0, 0, 0,
    0, -3, -15, -12, -20, -14, -12, -6,
    -18, -8, -14, 0, -8, 0, -14, -9,
    -24, -3, -19, -17, -15, -23, -14, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    -5, 0, -5, 0, -8, -9, -5, -13,
    -11, -18, -11, -17, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, -14, -22, -11, 0, -20, 0,
    -18, -15, -17, -20, 0, -3, -6, -6,
    -16, -29, -11, -26, -26, -5, -31, -6,
    0, 0, 0, -15, -14, -14, -14, -15,
    0, -13, -14, 0, -14, -14, -15, -17,
    -15, -17, -5, -1, -6, 0, 0, 0,
    0, 0, -13, 0, -10, 0, -17, -6,
    -10, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, -13, 0,
    -14, -5, -15, -5, -13, -13, -16, -17,
    -14, -9, -16, -19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -9, 0,
    0, 0, 0, 0, 0, -25, 0, -20,
    -12, -3, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, 0, -13, -2, -11, -15, 0,
    -13, 0, -3, -21, -11, 0, 0, 0,
    0, -5, -5, 0, 0, 0, 0, 0,
    -5, -3, -8, -8, 0, -8, 0, -17,
    0, 0, 0, 0, 0, 0, -6, 0,
    -13, 0, -11, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, -2, 0, 0, -2,
    -2, -3, 0, 0, -12, -20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -2,
    -5, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 71,
    .right_class_cnt     = 57,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_autl21 = {
#else
lv_font_t ui_font_autl21 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_AUTL21*/

