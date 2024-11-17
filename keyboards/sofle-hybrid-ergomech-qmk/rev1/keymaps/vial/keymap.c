/* Copyright 2020 Josef Adamcik
 * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
 * Modification for Vial support by Drew Petersen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// clang-format off

#include QMK_KEYBOARD_H
#include "oled.c"

// Default keymap. This can be changed in Vial. Use oled.c to change beavior that Vial cannot change.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  _   |   -  |   -  |   -  |   -  |   -  |                    |  ESC |   1  |   2  |   3  |   4  |  5   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  _   |   -  |   -  |   -  |   -  |   -  |                    |  Tab |   Q  |   W  |   E  |   R  |  T   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  _   |   -  |   -  |   -  |   -  |   -  |-------.    ,-------|LShift|   A  |   S  |   D  |   F  |  G   |
 * |------+------+------+------+------+------|   -   |    |   `   |------+------+------+------+------+------|
 * |  -   |   -  |   -  |   -  |   -  |   -  |-------|    |-------| LCTL |   Z  |   X  |   C  |   V  |  B   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |   -  |   -  |   -  |   -  | /  -    /       \Space \  | LALT |   I  |   M  | Enter|
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

LAYOUT(
    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                       KC_ESC,     KC_1,     KC_2,    KC_3,    KC_4,    KC_5,
    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                       KC_TAB,     KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,
    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                       KC_LSFT,    KC_A,     KC_S,    KC_D,    KC_F,    KC_G,
    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,       KC_GRV, KC_LCTL,    KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,
                      KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,       KC_SPC, KC_LALT,    KC_I,     KC_M,    KC_ENT
)
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
