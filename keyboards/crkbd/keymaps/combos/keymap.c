/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

//compile using command: qmk compile -kb crkbd -km combos

#include QMK_KEYBOARD_H
#include <stdio.h>
#include <keymap_swedish.h>

enum custom_keycodes {
    ALT_TAB = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3( // QWERTY
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,     SE_Q,    SE_W,    SE_E,    SE_R,    SE_T,                         SE_Y,    SE_U,    SE_I,    SE_O,   SE_P,   KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    SE_A,    SE_S,    SE_D,    SE_F,    SE_G,                         SE_H,    SE_J,    SE_K,    SE_L, SE_QUOT,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    SE_Z,    SE_X,    SE_C,    SE_V,    SE_B,                         SE_N,    SE_M, SE_COMM,  SE_DOT, SE_MINS, KC_LGUI,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT,  KC_SPC,   MO(1),      MO(2), KC_BSPC, KC_LALT
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x6_3( //Numpad
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      ALT_TAB, XXXXXXX,    SE_7,    SE_8,    SE_9, XXXXXXX,                      SE_CIRC, SE_AMPR, SE_DQUO, SE_PIPE, SE_BSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX,    SE_4,    SE_5,    SE_6, XXXXXXX,                      XXXXXXX, SE_LPRN, SE_LCBR, SE_LBRC, SE_LABK, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+---------+-------+--------|
      KC_LCTL,    SE_0,    SE_1,    SE_2,    SE_3, XXXXXXX,                      XXXXXXX, SE_RPRN, SE_RCBR, SE_RBRC, SE_RABK, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT,  KC_SPC, _______,      MO(3), KC_BSPC, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3( //Symbols
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   SE_AT, SE_HASH,  SE_DLR, SE_PERC, SE_AMPR,                      SE_EXLM, SE_ARNG, SE_ADIA, SE_ODIA, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, SE_PLUS,  SE_EQL,                      SE_QUES, XXXXXXX, XXXXXXX, SE_TILD, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      SE_SLSH, SE_DQUO, SE_UNDS,  XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT,  KC_SPC,   MO(3),    _______, KC_BSPC, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3( //Arrows
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_RGUI, KC_RCTL, KC_RALT,  KC_TAB, KC_RSFT,                      KC_RSFT,  KC_TAB, KC_RALT, KC_RCTL, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        MO(4), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC, _______,    _______, KC_BSPC, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT_split_3x6_3( //Function keys
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_PSCR,   KC_F4,   KC_F5,   KC_F6,  KC_F11,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,   KC_F1,   KC_F2,   KC_F3,  KC_F12,                      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC, _______,    _______, KC_BSPC, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )

};

// combos
const uint16_t PROGMEM combo_qwerty_escape[] = {KC_TAB, SE_Q,  SE_W, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_qwerty_escape,     KC_ESC)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ALT_TAB:
            if (record->event.pressed) {
                // when keycode ALT_TAB is pressed
                register_code(KC_LALT);  // press the lalt key
                register_code(KC_TAB);  // press the tab key
            } else {
                // when keycode ALT_TAB is released
                unregister_code(KC_TAB);  // release the tab key
                unregister_code(KC_LALT);  // release the lalt key
            }
            break;
    }
    return true;
}