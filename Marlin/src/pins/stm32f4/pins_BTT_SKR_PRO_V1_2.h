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

#if HOTENDS > 3 || E_STEPPERS > 3
  #error "BIGTREE SKR Pro V1.2 supports up to 3 hotends / E steppers."
#endif

#define BOARD_INFO_NAME "BTT SKR Pro V1.2"
  
#if HOTENDS < 3
  #if ENABLED(PSU_CONTROL)
    #define PS_ON_PIN                         PF6   // T3
  #endif

  #if ENABLED(Z_STEPPER_AUTO_ALIGN)
    // replace E2 with Z2 to enable G34
    #define Z2_STEP_PIN                       PD13  // E2_STEP_PIN
    #define Z2_DIR_PIN                        PG9   // E2_DIR_PIN
    #define Z2_ENABLE_PIN                     PF0   // E2_ENABLE_PIN
    #define Z2_CS_PIN                         PG12  // E2_CS_PIN
  #endif
#endif

#if ENABLED(BLTOUCH)
  #define Z_MIN_PIN                           PA2   // Z_MIN_PROBE_PIN
#endif

#include "pins_BTT_SKR_PRO_common.h"
