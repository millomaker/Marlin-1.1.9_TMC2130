/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 */

/**
 * blinkm.cpp - Control a BlinkM over i2c
 */

#include "MarlinConfig.h"

#if ENABLED(BLINKM)

#include "blinkm.h"
#include "leds.h"
#include <Wire.h>

void blinkm_set_led_color(const LEDColor &color) {
  Wire.begin();
  Wire.beginTransmission(0x09);
  Wire.write('o');                    //to disable ongoing script, only needs to be used once
  Wire.write('n');
  Wire.write(color.r);
  Wire.write(color.g);
  Wire.write(color.b);
  Wire.endTransmission();
}

#endif // BLINKM
