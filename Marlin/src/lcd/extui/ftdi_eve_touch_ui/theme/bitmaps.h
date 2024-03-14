/*************
 * bitmaps.h *
 *************/

/****************************************************************************
 *   Written By Mark Pelletier  2017 - Aleph Objects, Inc.                  *
 *   Written By Marcio Teixeira 2018 - Aleph Objects, Inc.                  *
 *                                                                          *
 *   This program is free software: you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published by   *
 *   the Free Software Foundation, either version 3 of the License, or      *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   This program is distributed in the hope that it will be useful,        *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU General Public License for more details.                           *
 *                                                                          *
 *   To view a copy of the GNU General Public License, go to the following  *
 *   location: <https://www.gnu.org/licenses/>.                             *
 ****************************************************************************/

#pragma once

namespace Theme {
  using namespace FTDI;

  constexpr PROGMEM bitmap_info_t Extruder_Icon_Info = {
    .format       = L1,
    .linestride   = 3,
    .filter       = BILINEAR,
    .wrapx        = BORDER,
    .wrapy        = BORDER,
    .RAMG_offset  = 8000,
    .width        = 24,
    .height       = 23,
  };

  constexpr PROGMEM unsigned char Extruder_Icon[69] = {
    0xFC, 0xFF, 0x3F,
    0xFE, 0xFF, 0x7F,
    0x03, 0x00, 0xC0,
    0x03, 0x00, 0xC0,
    0x03, 0x00, 0xC0,
    0x03, 0x00, 0xC0,
    0xFE, 0xFF, 0x7F,
    0xFC, 0xFF, 0x3F,
    0xFC, 0xFF, 0x3F,
    0xFE, 0xFF, 0x7F,
    0x03, 0x00, 0xC0,
    0x03, 0x00, 0xC0,
    0x03, 0x00, 0xC0,
    0x03, 0x00, 0xC0,
    0xFE, 0xFF, 0x7F,
    0xFE, 0xFF, 0x7F,
    0xE0, 0xFF, 0x07,
    0xC0, 0xFF, 0x03,
    0x80, 0x81, 0x01,
    0x00, 0xC3, 0x00,
    0x00, 0x66, 0x00,
    0x00, 0x3C, 0x00,
    0x00, 0x3C, 0x00
  };

  constexpr PROGMEM bitmap_info_t Bed_Heat_Icon_Info = {
    .format       = L1,
    .linestride   = 4,
    .filter       = BILINEAR,
    .wrapx        = BORDER,
    .wrapy        = BORDER,
    .RAMG_offset  = 8069,
    .width        = 32,
    .height       = 23,
  };

  constexpr PROGMEM unsigned char Bed_Heat_Icon[92] = {
    0x80, 0x81, 0x81, 0x01,
    0x80, 0x81, 0x81, 0x01,
    0x00, 0x03, 0x03, 0x03,
    0x00, 0x03, 0x03, 0x03,
    0x00, 0x06, 0x06, 0x06,
    0x00, 0x06, 0x06, 0x06,
    0x00, 0x03, 0x03, 0x03,
    0x00, 0x03, 0x03, 0x03,
    0x80, 0x81, 0x81, 0x01,
    0x80, 0x81, 0x81, 0x01,
    0xC0, 0xC0, 0xC0, 0x00,
    0xC0, 0xC0, 0xC0, 0x00,
    0x60, 0x60, 0x60, 0x00,
    0x60, 0x60, 0x60, 0x00,
    0xC0, 0xC0, 0xC0, 0x00,
    0xC0, 0xC0, 0xC0, 0x00,
    0x80, 0x81, 0x81, 0x01,
    0x80, 0x81, 0x81, 0x01,
    0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
    0x03, 0x00, 0x00, 0xC0,
    0xFF, 0xFF, 0xFF, 0xFF
  };

  constexpr PROGMEM bitmap_info_t Fan_Icon_Info = {
    .format       = L1,
    .linestride   = 4,
    .filter       = BILINEAR,
    .wrapx        = BORDER,
    .wrapy        = BORDER,
    .RAMG_offset  = 8161,
    .width        = 32,
    .height       = 32,
  };

  constexpr PROGMEM unsigned char Fan_Icon[128] = {
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
    0x1F, 0x00, 0x00, 0xF8,
    0x0F, 0xC0, 0x1F, 0xF0,
    0x07, 0xE0, 0x0F, 0xE0,
    0x03, 0xF0, 0x07, 0xC0,
    0x03, 0xF8, 0x07, 0xC0,
    0x03, 0xF8, 0x07, 0xC0,
    0x03, 0xF0, 0x07, 0xC0,
    0x03, 0xE0, 0x07, 0xC0,
    0x03, 0xC0, 0x03, 0xC0,
    0x0B, 0x00, 0x00, 0xC3,
    0x1B, 0xC0, 0x83, 0xC7,
    0xFB, 0xE3, 0xC7, 0xCF,
    0xFB, 0xF7, 0xEF, 0xDF,
    0xFB, 0xF7, 0xEF, 0xDF,
    0xFB, 0xF7, 0xEF, 0xDF,
    0xFB, 0xF7, 0xEF, 0xDF,
    0xF3, 0xE3, 0xC7, 0xDF,
    0xE3, 0xC1, 0x03, 0xD8,
    0xC3, 0x00, 0x00, 0xD0,
    0x03, 0xC0, 0x03, 0xC0,
    0x03, 0xE0, 0x07, 0xC0,
    0x03, 0xE0, 0x0F, 0xC0,
    0x03, 0xE0, 0x1F, 0xC0,
    0x03, 0xE0, 0x1F, 0xC0,
    0x03, 0xE0, 0x0F, 0xC0,
    0x07, 0xF0, 0x07, 0xE0,
    0x0F, 0xF8, 0x03, 0xF0,
    0x1F, 0x00, 0x00, 0xF8,
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF
  };

  constexpr PROGMEM bitmap_info_t TD_Icon_Info = {
    .format       = L1,
    .linestride   = 7,
    .filter       = BILINEAR,
    .wrapx        = BORDER,
    .wrapy        = BORDER,
    .RAMG_offset  = 8289,
    .width        = 50,
    .height       = 20,
  };

  constexpr PROGMEM unsigned char TD_Icon[140] = {
    0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x3F, 0x00,                    // Thumb Drive Widget
    0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0xC0, 0x01,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x03,
    0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x03,
    0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x06, 0x00, 0x00, 0x00, 0xC0, 0x01,
    0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
    0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x3F, 0x00
  };

  constexpr PROGMEM bitmap_info_t File_Icon_Info = {
    .format       = L1,
    .linestride   = 4,
    .filter       = BILINEAR,
    .wrapx        = BORDER,
    .wrapy        = BORDER,
    .RAMG_offset  = 8429,
    .width        = 25,
    .height       = 32,
  };

  const unsigned char File_Icon[128] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x02, 0xC0, 0x00, 0x00,
    0x02, 0x40, 0x01, 0x00, 0x02, 0x40, 0x02, 0x00, 0x02, 0x40, 0x04, 0x00,
    0x02, 0x40, 0x08, 0x00, 0x02, 0x40, 0x10, 0x00, 0x02, 0x40, 0x20, 0x00,
    0x02, 0x40, 0x40, 0x00, 0x02, 0xC0, 0xFF, 0x00, 0x02, 0x00, 0x80, 0x00,
    0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00,
    0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00,
    0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00,
    0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00,
    0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00,
    0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00, 0x02, 0x00, 0x80, 0x00,
    0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00
  };

  constexpr PROGMEM bitmap_info_t Clock_Icon_Info = {
    .format       = L1,
    .linestride   = 4,
    .filter       = BILINEAR,
    .wrapx        = BORDER,
    .wrapy        = BORDER,
    .RAMG_offset  = 8557,
    .width        = 32,
    .height       = 32,
  };

  const unsigned char Clock_Icon[128] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x7E, 0x7E, 0x00,
    0x00, 0x07, 0xE0, 0x00, 0xC0, 0x01, 0x80, 0x03, 0xE0, 0x80, 0x00, 0x07,
    0x30, 0x80, 0x01, 0x0E, 0x30, 0x80, 0x01, 0x0C, 0x18, 0x80, 0x01, 0x18,
    0x0C, 0x80, 0x01, 0x10, 0x0C, 0x80, 0x01, 0x30, 0x04, 0x80, 0x01, 0x30,
    0x06, 0x80, 0x01, 0x20, 0x06, 0x80, 0x01, 0x60, 0x06, 0x80, 0x01, 0x60,
    0x06, 0x80, 0xFF, 0x60, 0x06, 0x80, 0xFF, 0x60, 0x06, 0x00, 0x00, 0x60,
    0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x20, 0x04, 0x00, 0x00, 0x30,
    0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x10, 0x18, 0x00, 0x00, 0x18,
    0x30, 0x00, 0x00, 0x0C, 0x70, 0x00, 0x00, 0x0E, 0xE0, 0x00, 0x00, 0x07,
    0xC0, 0x01, 0x80, 0x03, 0x00, 0x07, 0xE0, 0x00, 0x00, 0xFE, 0x7F, 0x00,
    0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00
  };

  constexpr PROGMEM bitmap_info_t Light_Bulb_Info = {
    .format       = L1,
    .linestride   = 4,
    .filter       = BILINEAR,
    .wrapx        = BORDER,
    .wrapy        = BORDER,
    .RAMG_offset  = 8685,
    .width        = 31,
    .height       = 32,
  };

  const unsigned char Light_Bulb[128] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
    0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x20, 0x00, 0x00, 0x02,
    0x40, 0x00, 0x00, 0x01, 0x80, 0x00, 0x80, 0x00, 0x00, 0x01, 0x40, 0x00,
    0x00, 0xF0, 0x07, 0x00, 0x00, 0x18, 0x0C, 0x00, 0x00, 0x6C, 0x18, 0x00,
    0x00, 0x34, 0x10, 0x00, 0x00, 0x1A, 0x20, 0x00, 0x00, 0x0A, 0x20, 0x00,
    0x3E, 0x0A, 0x20, 0x3E, 0x00, 0x02, 0x20, 0x00, 0x00, 0x02, 0x20, 0x00,
    0x00, 0x06, 0x30, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x08, 0x08, 0x00,
    0x00, 0x08, 0x08, 0x00, 0x00, 0x11, 0x44, 0x00, 0x80, 0x10, 0x84, 0x00,
    0x40, 0x10, 0x04, 0x01, 0x20, 0xF0, 0x07, 0x02, 0x00, 0xE0, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
  };

  constexpr PROGMEM bitmap_info_t Chamber_Icon_Info = {
    .format       = L1,
    .linestride   = 4,
    .filter       = BILINEAR,
    .wrapx        = BORDER,
    .wrapy        = BORDER,
    .RAMG_offset  = 8813,
    .width        = 32,
    .height       = 32,
  };

  const unsigned char Chamber_Icon[128] PROGMEM = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0xF8,
    0x0F, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00, 0xC0,
    0x03, 0x00, 0x00, 0xC0, 0x83, 0x81, 0x81, 0xC1, 0x83, 0x81, 0x81, 0xC1,
    0x03, 0x03, 0x03, 0xC3, 0x03, 0x03, 0x03, 0xC3, 0x03, 0x06, 0x06, 0xC6,
    0x03, 0x06, 0x06, 0xC6, 0x03, 0x03, 0x03, 0xC3, 0x03, 0x03, 0x03, 0xC3,
    0x83, 0x81, 0x81, 0xC1, 0x83, 0x81, 0x81, 0xC1, 0xC3, 0xC0, 0xC0, 0xC0,
    0xC3, 0xC0, 0xC0, 0xC0, 0x63, 0x60, 0x60, 0xC0, 0x63, 0x60, 0x60, 0xC0,
    0xC3, 0xC0, 0xC0, 0xC0, 0xC3, 0xC0, 0xC0, 0xC0, 0x83, 0x81, 0x81, 0xC1,
    0x83, 0x81, 0x81, 0xC1, 0x03, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xC0,
    0x07, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0x00, 0xF8,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
  };

  constexpr PROGMEM bitmap_info_t Home_icon_Info = {
    .format       = L1,
    .linestride   = 4,
    .filter       = BILINEAR,
    .wrapx        = BORDER,
    .wrapy        = BORDER,
    .RAMG_offset  = 8941,
    .width        = 32,
    .height       = 32,
  };

  constexpr PROGMEM unsigned char Home_icon[128] = {
  0x00,0x7B,0xF0,0x00,
  0x00,0x4F,0xF8,0x00,
  0x00,0x4E,0x1C,0x00,
  0x00,0x5C,0x0E,0x00,
  0x00,0x78,0x07,0x00,
  0x00,0x70,0x03,0x80,
  0x00,0xE0,0x01,0xC0,
  0x01,0xC0,0x00,0xE0,
  0x03,0x80,0x00,0x70,
  0x07,0x00,0x00,0x38,
  0x0E,0x00,0x00,0x1C,
  0x1C,0x00,0x00,0x0E,
  0x3C,0x00,0x00,0x0F,
  0x3C,0x00,0x00,0x0F,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x04,0x00,0x00,0x08,
  0x07,0xFF,0xFF,0xF8,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00
};

  constexpr PROGMEM uint32_t UTF8_FONT_OFFSET  = 10000;
  constexpr PROGMEM uint32_t BACKGROUND_OFFSET = 40000;
} // namespace Theme
