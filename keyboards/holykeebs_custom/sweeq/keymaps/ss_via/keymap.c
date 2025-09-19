// Copyright 2023 Idan Kamara (@idank)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "users/holykeebs/holykeebs.h"

#define QK_C_EEPROM QK_CLEAR_EEPROM

// my vars
// Home Row Mods
// Left hand
#define HM_A  LALT_T(KC_A)   // Hold = Alt(option), Tap = A
#define HM_R  LGUI_T(KC_R)   // Hold = Gui(command),  Tap = R
#define HM_S  LCTL_T(KC_S)   // Hold = Ctrl,  Tap = S
#define HM_T  LSFT_T(KC_T)   // Hold = Shift, Tap = T
// Right hand
#define HM_N  RSFT_T(KC_N)   // Hold = Shift, Tap = N
#define HM_E  RCTL_T(KC_E)   // Hold = Ctrl,  Tap = E
#define HM_I  RGUI_T(KC_I)   // Hold = Gui(command),  Tap = I
#define HM_O  RALT_T(KC_O) // Hold = Alt(option), Tap = O
//
// Single layer keys
#define LTSPC LT(1, KC_SPC)
#define LTBSC LT(2, KC_BSPC)
#define MO1 MO(1)
#define MO2 MO(2)
#define MO3 MO(3)
#define MO4 MO(4)
#define MO5 MO(5)
#define MO6 MO(6)
#define MO7 MO(7)
#define MO8 MO(8)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,            KC_J,    KC_L,    KC_U,    KC_Y,    MO6,
    HM_A,    HM_R,    HM_S,    HM_T,    KC_D,            KC_H,    HM_N,    HM_E,    HM_I,    HM_O,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_K,    KC_M,    KC_NO,   MO7,     MO5,
                                    MO3, LTSPC, MO1, MO3
  ),

  [1] = LAYOUT(
    KC_CAPS,                LAG(KC_LEFT),    LAG(KC_RGHT),    G(KC_LBRC),    G(KC_RBRC),            KC_PGDN,    KC_PGUP,       KC_END,        KC_HOME,    G(KC_BSPC),
    QK_CAPS_WORD_TOGGLE,    S(KC_TAB),       KC_ENT,          KC_ESC,        KC_TAB,                KC_LEFT,    KC_DOWN,       KC_UP,         KC_RGHT,    KC_NO,
    KC_NO,                  LGUI(KC_X),      LGUI(KC_C),      LGUI(KC_V),    KC_NO,                 KC_NO,      C(KC_LEFT),    C(KC_RGHT),    KC_NO,      KC_NO,
                                    KC_TRNS, LTBSC, MO2, KC_TRNS
  ),

  [2] = LAYOUT(
    KC_MUTE,    LGUI(KC_W),    LGUI(KC_T),      KC_NO,           KC_NO,                       KC_NO,    KC_NO,    RGUI(KC_Q),    KC_NO,    KC_NO,
    KC_NO,      KC_NO,         LALT(KC_ESC),    LGUI(KC_SPC),    LGUI(LCTL(KC_D)),            KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,
    KC_VOLD,    KC_VOLU,       KC_MPLY,         KC_MPRV,         KC_MNXT,                     KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT(
    KC_NO,         S(KC_COMM),    S(KC_DOT),     KC_MINS,       S(KC_EQL),               KC_BSLS,       KC_SLSH,    KC_LBRC,       KC_RBRC,       KC_NO,
    S(KC_SLSH),    S(KC_QUOT),    KC_QUOT,       S(KC_MINS),    KC_EQL,                  S(KC_SCLN),    KC_DOT,     S(KC_9),       S(KC_0),       KC_NO,
    KC_GRV,        S(KC_GRV),     S(KC_BSLS),    KC_NO,         KC_NO,                   KC_SCLN,       KC_COMM,    S(KC_LBRC),    S(KC_RBRC),    KC_NO,
                                    MO4, KC_TRNS, KC_TRNS, MO4
  ),

  [4] = LAYOUT(
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,            KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,
    S(KC_1),    S(KC_2),    S(KC_3),    S(KC_4),    KC_NO,            KC_NO,    S(KC_5),    S(KC_6),    S(KC_7),    S(KC_8),
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,            KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [5] = LAYOUT(
    KC_7,    KC_8,    KC_9,    KC_NO,    KC_NO,            KC_F9,    KC_F10,    KC_F11,     KC_F12,    KC_NO,
    KC_4,    KC_5,    KC_6,    KC_0,     KC_NO,            KC_F5,    KC_F6,     KC_F7,      KC_F8,     KC_NO,
    KC_1,    KC_2,    KC_3,    KC_NO,    KC_NO,            KC_F1,    KC_F2,     KC_F3,      KC_F4,     KC_NO,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [6] = LAYOUT(
    LCTL(KC_7),    LCTL(KC_8),    LCTL(KC_9),    KC_NO,         KC_NO,                KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    LCTL(KC_4),    LCTL(KC_5),    LCTL(KC_6),    LCTL(KC_0),    HK_S_MODE,            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    LCTL(KC_1),    LCTL(KC_2),    LCTL(KC_3),    KC_NO,         HK_D_MODE,            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                    KC_BTN1, KC_BTN2, KC_TRNS, MO8
  ),

  [7] = LAYOUT(
    G(KC_DOT),    KC_NO,        KC_NO,         G(KC_P),      KC_NO,            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    A(KC_F8),     G(KC_T),      LSG(KC_O),     LSG(KC_P),    LSG(KC_9),        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    G(KC_I),      LSG(KC_I),    C(G(KC_O)),    LAG(KC_B),    KC_NO,            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [8] = LAYOUT(
    QK_BOOT,        HK_DUMP,       HK_SAVE,       HK_RESET,        HK_C_SCROLL,            KC_NO,    KC_NO,      KC_NO,    KC_NO,    QK_BOOT,
    QK_C_EEPROM,    HK_P_SET_D,    HK_P_SET_S,    HK_P_SET_BUF,    HK_S_MODE_T,            KC_NO,    KC_DOWN,    KC_UP,    KC_NO,    QK_C_EEPROM,
    KC_LSFT,        KC_NO,         KC_NO,         KC_NO,           HK_D_MODE_T,            KC_NO,    KC_NO,      KC_NO,    KC_NO,    KC_NO,
                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};

// used for chordal hold behavior
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L',          'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L',          'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L',          'R', 'R', 'R', 'R', 'R',
                                '*', '*', '*', '*'
    );
