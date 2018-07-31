/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 *
 */

/**
 * Arduino Mega with RAMPS v1.4 for Anycubic
 */

#ifndef BOARD_NAME
  #define BOARD_NAME "Anycubic RAMPS 1.4"
#endif

#define IS_RAMPS_EFB

#define FAN2_PIN             44
#define ORIG_E0_AUTO_FAN_PIN 44

#if AXIS_DRIVER_TYPE(X, TMC2130) 
   #define X_CS_PIN          4
#endif
   #if AXIS_DRIVER_TYPE(Y, TMC2130) 
#define Y_CS_PIN	     5
#endif
#if AXIS_DRIVER_TYPE(Z, TMC2130) 
   #define Z_CS_PIN          6
#endif
#if AXIS_DRIVER_TYPE(E0, TMC2130) 
   #define E0_CS_PIN        11
#endif

#include "pins_RAMPS.h"
