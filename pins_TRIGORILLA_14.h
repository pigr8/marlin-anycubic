/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Arduino Mega with RAMPS v1.4 for Anycubic
 */

#define BOARD_INFO_NAME "Anycubic RAMPS 1.4"

//
// Heaters
//
#define TG_HEATER_BED_PIN                    8
#define TG_HEATER_0_PIN                     10
#define TG_HEATER_1_PIN                     45

//
// Temp Sensors
//
#define TEMP_0_PIN                          13
#define TEMP_1_PIN                          15
#define TEMP_2_PIN                          12
#define TEMP_BED_PIN                        14

//
// Fans
//
#define TG_FAN0_PIN                          9
#define TG_FAN1_PIN                          7
#define TG_FAN2_PIN                         44
#define RAMPS_D8_PIN         TG_HEATER_BED_PIN
#define RAMPS_D9_PIN               TG_FAN0_PIN
#define CONTROLLER_FAN_PIN         TG_FAN1_PIN
#define RAMPS_D10_PIN          TG_HEATER_0_PIN
#ifndef E0_AUTO_FAN_PIN
  #define E0_AUTO_FAN_PIN          TG_FAN2_PIN
#endif

//
// Limit Switches
//
#define X_MIN_PIN                            3
#define Y_MIN_PIN                           42
#define Z_MIN_PIN                           -1
#define Z2_MIN_PIN                          -1
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN                   18
#endif
#define X_MAX_PIN                           -1
#define Y_MAX_PIN                           -1
#define Z_MAX_PIN                           -1
#ifndef FIL_RUNOUT_PIN
  #define FIL_RUNOUT_PIN                    19
#endif

//
// Servos
//
#if MB(TRIGORILLA_14)
  #define SERVO0_PIN                        11
  #define SERVO1_PIN                         6
  #define SERVO2_PIN                         5
  #define SERVO3_PIN                         4
#endif

//
// Other PINs
//
//#define BEEPER_PIN                          31
//#define SD_DETECT_PIN                       49

#include "pins_RAMPS.h"
