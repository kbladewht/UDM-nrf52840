/*
Copyright 2015 Jun Wako <wakojun@gmail.com>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#define KB_NRF_DEBUG


/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6464
#define DEVICE_VER      0x0001
#define MANUFACTURER    TMK
#define PRODUCT         RCRD
#define DESCRIPTION     RCRD keyboard firmware for template

/* key matrix size */
#define MATRIX_ROWS 13
#define MATRIX_COLS 10

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    1

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define BACKLIGHT_LEVELS 3

#define BATTERY_PIN NRF_SAADC_INPUT_AIN1

#define NRF_GPIO_PIN_MAP(port, pin) ((port << 5) | pin)

#define P111_1 NRF_GPIO_PIN_MAP(0,24)
#define P003_2 NRF_GPIO_PIN_MAP(0,13)
#define P028_3 NRF_GPIO_PIN_MAP(1,6)
#define P113_4 NRF_GPIO_PIN_MAP(1,4)
#define P002_5 NRF_GPIO_PIN_MAP(0,10)

#define P029_6 NRF_GPIO_PIN_MAP(0,12)
#define P031_7 NRF_GPIO_PIN_MAP(0,22)
#define P006_8 NRF_GPIO_PIN_MAP(0,20)
#define P008_9 NRF_GPIO_PIN_MAP(0,17)
#define P026_10 NRF_GPIO_PIN_MAP(0,15)


#define P000_11 NRF_GPIO_PIN_MAP(1,11)
#define P005_12 NRF_GPIO_PIN_MAP(0,5)
#define P109_13 NRF_GPIO_PIN_MAP(0,3)
#define P006_14 NRF_GPIO_PIN_MAP(0,28)
#define P015_15 NRF_GPIO_PIN_MAP(1,13)

#define P012_16 NRF_GPIO_PIN_MAP(0,2)
#define P022_17 NRF_GPIO_PIN_MAP(0,29)
#define P020_18 NRF_GPIO_PIN_MAP(0,31)
#define P100_19 NRF_GPIO_PIN_MAP(0,30)
#define P024_20 NRF_GPIO_PIN_MAP(0,0)


#define P104_21 NRF_GPIO_PIN_MAP(0,6)
#define P106_22 NRF_GPIO_PIN_MAP(0,8)
#define P010_23 NRF_GPIO_PIN_MAP(1,9)

static const uint8_t row_pins[MATRIX_ROWS] = {P111_1, P003_2, P028_3, P113_4, P002_5, P029_6, P031_7, P006_8, P008_9, P026_10,P000_11,P005_12,P109_13};
static const uint8_t col_pins[MATRIX_COLS] = {P010_23, P106_22, P104_21, P024_20, P100_19, P020_18, P022_17, P012_16, P015_15, P006_14};
/*
 * Feature disable options
     
 */

/* disable debug print */
#define NO_DEBUG

/* disable print */
#define NO_PRINT

// temp comment
/* disable action features */
#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#endif
