// Copyright 2021 m.ki (@telzo2000)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x4D43
#define PRODUCT_ID   0x0537
#define DEVICE_VER   0x0001
#define MANUFACTURER m.ki
#define PRODUCT      cool536r

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS { B5, B4, B1 , F7, D0 }
#define MATRIX_COL_PINS { B2, B6, B3, F6, F5 }
#define MATRIX_ROW_PINS_RIGHT { B5, B4, B1 , F7, D0 }
#define MATRIX_COL_PINS_RIGHT { B2, B6, B3, F6, F5  }
#define UNUSED_PINS

#define DIODE_DIRECTION ROW2COL

#define ENCODERS_PAD_A {D4,D7 }
#define ENCODERS_PAD_B {C6,E6 }
#define ENCODERS_PAD_A_RIGHT {D7,D4 }
#define ENCODERS_PAD_B_RIGHT {E6,C6}

#define MASTER_LEFT

#define SOFT_SERIAL_PIN D2
//#define SELCT_SOFT_SERIAL_SPEED {4}
//#define USE_I2C
#define MASTER_LEFT
#define SPLIT_OLED_ENABLE

#define SPLIT_USB_DETECT

#define RGB_DI_PIN D3
#ifdef RGB_DI_PIN
#    define RGBLED_NUM 16
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#    define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/
#    define RGBLIGHT_ANIMATIONS
/*== or choose animations ==*/
//#    define RGBLIGHT_EFFECT_BREATHING
//#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#    define RGBLIGHT_EFFECT_SNAKE
//#    define RGBLIGHT_EFFECT_KNIGHT
//#    define RGBLIGHT_EFFECT_CHRISTMAS
//#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#    define RGBLIGHT_EFFECT_RGB_TEST
//#    define RGBLIGHT_EFFECT_ALTERNATING
/*== customize breathing effect ==*/
/*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
//#    define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
/*==== use exp() and sin() ====*/
#    define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
#    define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

