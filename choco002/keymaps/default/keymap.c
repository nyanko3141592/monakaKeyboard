// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define NUM_B LT(_NUM, KC_B)
#define FN_N LT(_FN, KC_N)

enum layer_number {
    _MAIN = 0,
    _NUM,
    _FN,
    _SYMBOL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐  ┌───┬───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │ [ │  │ ] │ Y │ U │ I │ O │ P │ / │
     * ├───┼───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┼───┤
     * │Cmd│ A │ S │ D │ F │ G │OPT│  │BSP│ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │SPC│  │SPC│ N │ M │ , │ . │ / │Ent│
     * └───┴───┴───┴───┴───┴───┴───┘  └───┴───┴───┴───┴───┴───┴───┘
     */
    [_MAIN] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC,  // L0
                     KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, // R0
                     KC_LGUI, KC_A, KC_S, KC_D, KC_F, KC_G,
                     KC_LOPT,                                             // L1
                     KC_BSPC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,   // R1
                     KC_LSFT, KC_Z, KC_X, KC_C, KC_V, NUM_B, KC_SPC,      // L2
                     KC_SPC, FN_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT // R2
                     ),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐  ┌───┬───┬───┬───┬───┬───┬───┐
     * │ESC│ ` │ 1 │ 2 │ 3 │ 4 │ 5 │  │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │
     * ├───┼───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┼───┤
     * │CTR│ ~ │ ! │ @ │ # │ $ │ % │  │ ^ │ & │ * │ ( │ ) │ _ │ + │
     * ├───┼───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │  │   │   │   │   │   │ \ │ | │
     * └───┴───┴───┴───┴───┴───┴───┘  └───┴───┴───┴───┴───┴───┴───┘
     */
    [_NUM] = LAYOUT(KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,  // L0
                    KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, // R0
                    KC_LGUI, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DOLLAR,
                    KC_PERCENT,                                                    // L1
                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, // R1
                    _______, _______, _______, _______, _______, _______,
                    KC_LGUI,                                                      // L2
                    KC_RGUI, _______, _______, _______, _______, _______, _______ // R2
                    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐  ┌───┬───┬───┬───┬───┬───┬───┐
     * │ESC│   │F1 │F2 │F3 │F4 │F5 │  │F6 │F7 │F8 │F9 │F10│F11│F12│
     * ├───┼───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┼───┤
     * │Cmd│   │   │   │   │ V-│ V+│  │   │   │ ← │ ↓ │ ↑ │ → │   │
     * ├───┼───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┼───┤
     * │Sft│   │   │   │   │   │   │  │   │   │   │   │   │   │   │
     * └───┴───┴───┴───┴───┴───┴───┘  └───┴───┴───┴───┴───┴───┴───┘
     */
    [_FN]     = LAYOUT(KC_ESC, _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, // L0
                       KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, // R0
                       KC_LGUI, _______, _______, KC_PSCR, _______, KC_KB_VOLUME_DOWN,
                       KC_KB_VOLUME_UP,                                              // L1
                       _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, // R1
                       KC_LSFT, _______, _______, _______, _______, _______,
                       KC_LGUI,                                                      // L2
                       KC_RGUI, _______, _______, _______, _______, _______, _______ // R2
                       ),
    [_SYMBOL] = LAYOUT(KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,  // L0
                       KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, // R0
                       KC_LCTL, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DOLLAR,
                       KC_PERCENT,                                                    // L1
                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, // R1
                       _______, _______, _______, _______, _______, _______,
                       _______,                                                      // L2
                       _______, _______, _______, _______, _______, _______, _______ // R2
                       ),
};
