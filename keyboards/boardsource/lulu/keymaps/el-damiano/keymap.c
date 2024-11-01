// Copyright 2022 Cole Smith <cole@boadsource.xyz>
// SPDX-License-Identifier: GPL-2.0-or-later

#include <stdint.h>
#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _SL,
    _NAV,
    _GAME,
    _NUM,
    _ADJUST
};

#define DEFAULT TO(_QWERTY)
#define NUM MO(_NUM)
#define SL MO(_SL)
#define NAV TO(_NAV)
#define GM TO(_GAME)

#define Mod_A CMD_T(KC_A)
#define Mod_S ALT_T(KC_S)
#define Mod_D CTL_T(KC_D)
#define Mod_F SFT_T(KC_F)

#define Mod_J SFT_T(KC_J)
#define Mod_K CTL_T(KC_K)
#define Mod_L ALT_T(KC_L)
#define Mod_P CMD_T(KC_P)

#define Mod_BSLS CMD_T(KC_BSLS)
#define Mod_LPRN ALT_T(KC_LPRN)
#define Mod_DQUO CTL_T(KC_DQUO)
#define Mod_RPRN SFT_T(KC_RPRN)

#define Mod_LCBR SFT_T(KC_LCBR)
#define Mod_EQUAL CTL_T(KC_EQUAL)
#define Mod_RCBR ALT_T(KC_RCBR)
#define Mod_PIPE CMD_T(KC_PIPE)

#define Mod_ESC CMD_T(KC_ESC)

#define Mod_TAB LT(_SL,KC_TAB)
#define Mod_BSPC LT(_NUM, KC_BSPC)

#define Mod_SPC LT(_NUM, KC_SPC)
#define Mod_ENT LT(_SL,KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
  XXXXXXX,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
  KC_GRV,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX,
  Mod_ESC,  KC_A,   Mod_S,   Mod_D,   Mod_F,   KC_G,                     KC_H,    Mod_J,   Mod_K,   Mod_L,   KC_P,    XXXXXXX,
  KC_SLSH,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, GM,           NAV,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT, XXXXXXX,
                          KC_LEFT, KC_RIGHT, Mod_SPC, Mod_ENT,    Mod_TAB,  Mod_BSPC,  KC_DOWN,  KC_UP
),

[_GAME] = LAYOUT(
  KC_LCMD, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  KC_TAB,  _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    _______,                   _______, KC_J,    KC_K,    KC_L,    KC_P,    _______,
  KC_ESC,  _______, _______, _______, _______, _______, DEFAULT,     NAV, _______, _______, _______, _______, _______, _______,
                             KC_LALT, KC_LSFT, KC_SPC,  KC_ENT,  KC_TAB, KC_BSPC, _______, _______
),

[_SL] = LAYOUT(
  XXXXXXX, KC_7,    KC_5,    KC_3,    KC_1,    KC_9,                      KC_0,     KC_2,    KC_4,    KC_6,    KC_8,    XXXXXXX,
  XXXXXXX, KC_GRV,  KC_LT,   KC_DLR,  KC_GT,   KC_MINUS,                  KC_EXLM,  KC_LBRC, KC_UNDS, KC_RBRC, XXXXXXX, XXXXXXX,
  _______, KC_BSLS, KC_LPRN, KC_DQUO, KC_RPRN, KC_HASH,                   KC_SCLN,  KC_LCBR, KC_EQUAL,KC_RCBR, KC_PIPE, XXXXXXX,
  XXXXXXX, KC_SLSH, KC_COLN, KC_ASTR, KC_PLUS, KC_AT,  XXXXXXX,  XXXXXXX, KC_PERC,  KC_AMPR, KC_CIRC, KC_QUES, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),

[_NAV] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, RGB_MOD,                   RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD,
  XXXXXXX, KC_F7, KC_F8, KC_F9, KC_F12, XXXXXXX,                          KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAKE,
  Mod_ESC, KC_F4, KC_F5, KC_F6, KC_F11, XXXXXXX,                          KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,XXXXXXX, QK_REBOOT,
  XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F10, XXXXXXX, GM,             DEFAULT, KC_END,  KC_PGDN, KC_PGUP, KC_HOME,  XXXXXXX, QK_BOOT,
                             KC_LCMD, KC_LALT, KC_LCTL, KC_LSFT, KC_RSFT,  KC_RCTL, KC_RALT, KC_RCMD
),

[_NUM] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, KC_LPRN, XXXXXXX, KC_RPRN, KC_MINUS,                  KC_EXLM, KC_LBRC, KC_EQUAL, KC_RBRC, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_7,    KC_5,    KC_3,    KC_1,    KC_9,                      KC_0,    KC_2,    KC_4,    KC_6,    KC_8,    XXXXXXX,
  XXXXXXX, KC_SLSH, XXXXXXX, KC_ASTR, KC_PLUS, KC_AT, XXXXXXX, XXXXXXX,   KC_PERC, KC_COMM, KC_CIRC,KC_DOT,  XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),

[_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
)

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _NAV, _SL, _ADJUST);
}
