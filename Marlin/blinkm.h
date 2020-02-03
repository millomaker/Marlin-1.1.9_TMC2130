/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 */

/**
 * blinkm.h - Control a BlinkM over i2c
 */

#ifndef _BLINKM_H_
#define _BLINKM_H_

struct LEDColor;
typedef LEDColor LEDColor;

void blinkm_set_led_color(const LEDColor &color);

#endif // _BLINKM_H_
