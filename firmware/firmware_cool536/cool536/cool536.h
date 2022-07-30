// Copyright 2021 m.ki (@telzo2000)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
        L04, L03, L02, L01, L00, R00, R01, R02, R03, R04,\
	L14, L13, L12, L11, L10, R10, R11, R12, R13, R14,\
	L24, L23, L22, L21, L20, R20, R21, R22, R23, R24,\
	          L32, L31, L30, R30, R31, R32 \
	) \
	{ \
    { L00, L01, L02, L03, L04 }, \
    { L10, L11, L12, L13, L14 }, \
    { L20, L21, L22, L23, L24 }, \
    { L30, L31, L32, KC_NO, KC_NO  }, \
    { R00, R01, R02, R03, R04 }, \
    { R10, R11, R12, R13, R14 }, \
    { R20, R21, R22, R23, R24 }, \
    { R30, R31, R32, KC_NO, KC_NO }  \
}
