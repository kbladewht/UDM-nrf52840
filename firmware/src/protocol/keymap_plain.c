/*
Copyright (C) 2018,2019 Jim Jiang <jim@lotlab.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"
#include "config.h"


const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
        {
	{ KC_NO,   KC_PGDN, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_A,    KC_NO }, \
	{ KC_HOME, KC_PGUP, KC_NO,   KC_NO,   KC_NO,   KC_BSLS, KC_NO,   KC_F7,   KC_F,    KC_NO }, \
	{ KC_Q,    KC_6,    KC_S,    KC_O,    KC_ENT,  KC_V,    KC_BSPC, KC_F10,  KC_LBRC, KC_F6 }, \
	{ KC_B,    KC_TAB,  KC_DEL,  KC_8,    KC_D,    KC_Y,    KC_COMM, KC_T,    KC_CAPS, KC_3 }, \
	{ KC_X,    KC_M,    KC_H,    KC_NO,   KC_L,    KC_SLSH, KC_F2,   KC_F1,   KC_R,    KC_F8 }, \
	{ KC_F11,  KC_9,    KC_J,    KC_0,    KC_RBRC,   KC_INS,  KC_E,    KC_1,    KC_DOT,  KC_F4 }, \
	{ KC_5,    KC_ESC,  KC_K,    KC_MINS, KC_QUOT, KC_F12,  KC_W,    KC_2,    KC_SCLN, KC_EQL }, \
	{ KC_GRV,   KC_UP,   KC_4,    KC_DOWN, KC_U,    KC_LEFT, KC_N,    KC_RGHT, KC_7,    KC_F9 }, \
	{ KC_END,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_I,    KC_NO }, \
	{ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LGUI, KC_NO,   KC_Z,    KC_G }, \
	{ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LCTL, KC_RCTL, KC_NO,   KC_NO,   KC_F3,   KC_C }, \
	{ KC_NO,   KC_NO,   KC_LALT, KC_RALT, KC_NO,   KC_NO,   KC_NO,   KC_PSCR, KC_P,    KC_F5 }, \
	{ KC_LSFT, KC_RSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SPC }  }
         
};

const action_t fn_actions[] = {
    ACTION_LAYER_TAP(1, KC_RALT)
};