/* Copyright 2023 jarierca
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
#include QMK_KEYBOARD_H
#include "keymap_spanish.h"

enum layers {
  _QWERTY,
  _DVORAK,
  _LOWER,
  _RAISE,
  _EXTEND,
  _MOUSE
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define MOUSE MO(_MOUSE)
#define DVORAK TG(_DVORAK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | LSFT |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   Ñ  |  ´  ´|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | LCTL |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  | RSFT |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | MOUSE| GUI  | Lower| SPACE|   RGB_MOD   |ENTER | Raise| LALT | RALT | RCTL |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_mit(
    KC_TAB,  ES_Q,    ES_W,    ES_E,    ES_R,    ES_T,    ES_Y,    ES_U,    ES_I,    ES_O,    ES_P,         KC_BSPC,
    KC_LSFT, ES_A,    ES_S,    ES_D,    ES_F,    ES_G,    ES_H,    ES_J,    ES_K,    ES_L,    ES_NTIL,      ES_ACUT,
    KC_LCTL, ES_Z,    ES_X,    ES_C,    ES_V,    ES_B,    ES_N,    ES_M,    ES_COMM, ES_DOT,  ES_MINS,      KC_RSFT,
    KC_NO,   MOUSE  , KC_LGUI, LOWER,   KC_SPC,      RGB_MOD     , KC_ENT,  RAISE,   KC_LALT, KC_RIGHT_ALT, KC_RIGHT_CTRL
),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | LSFT |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | LCTL |   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | MOUSE| GUI  | Lower| SPACE|   RGB_MOD   |ENTER | Raise| LALT | RALT | RCTL |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_planck_mit(
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y,    KC_F,   KC_G,    KC_C,    KC_R,    KC_L,         KC_BSPC,
    KC_LSFT, KC_A,    KC_O,    KC_E,   KC_U,     KC_I,    KC_D,   KC_H,    KC_T,    KC_TRNS, KC_S,         KC_SLSH,
    KC_LCTL, KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X,    KC_B,   KC_M,    KC_W,    KC_V,    KC_Z,         KC_SFTENT,
    KC_NO,   MOUSE  , KC_LGUI, LOWER,  KC_SPC,      RGB_MOD     , KC_ENT,  RAISE,   KC_LALT, KC_RIGHT_ALT, KC_RIGHT_CTRL
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * | ESC  |  F1  |  F2  |  F3  |  F4  | PAUS | INS  | HOME |  ↑   |  END | PGUP | BSPC |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LSFT |  F5  |  F6  |  F7  |  F7  | PSCR | DEL  |  ←   |  ↓   |  →   | PGDN | ¨  ¨ |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LCTL |  F5  |  F10 |  F11 |  F12 | APP  | COPY | PASTE|  ;   |  :   |  _   | RSFT |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  ___ | GUI  |  ___ | SPACE|   RGB_MOD   |ENTER |  ___ | LALT |      | RCTL |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_planck_mit(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_PAUS, KC_INS,     KC_HOME,    KC_UP,   KC_END,  KC_PGUP, KC_BSPC,
    KC_LSFT, KC_F5,   KC_F6,   KC_F7,   KC_F8,  KC_PSCR, KC_DEL,     KC_LEFT,    KC_DOWN, KC_RGHT, KC_PGDN, ES_DIAE,
    KC_LCTL, KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_APP,  LCTL(KC_C), LCTL(KC_V), ES_SCLN, ES_COLN, ES_UNDS, KC_RSFT,
    KC_NO,   _______, KC_LGUI, _______, KC_SPC,      RGB_MOD     ,   KC_ENT,     _______, KC_LALT, KC_NO,   KC_RIGHT_CTRL
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * | CAPS |  !   |  "   |  #   |  ^   |      |  *   |  7   |  8   |  9   |  -   | BSPC |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LSFT |  {   |  }   |  (   |  )   |  ?   |  /   |  4   |  5   |  6   |  +   | '  ' |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LCTL |  [   |  ]   |  <   |  >   |  =   |  0   |  1   |  2   |  3   |  .   | RSFT |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  ___ | GUI  |  ___ | SPACE|   RGB_MOD   |ENTER |  ___ | LALT |      | RCTL |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_planck_mit(
   KC_CAPS, ES_EXLM, ES_DQUO, ES_HASH, ES_CIRC, KC_NO,   ES_ASTR, ES_7,    ES_8,    ES_9,    ES_MINS, KC_BSPC,
   KC_LSFT, ES_LCBR, ES_RCBR, ES_LPRN, ES_RPRN, ES_QUES, ES_SLSH, ES_4,    ES_5,    ES_6,    ES_PLUS, ES_QUOT,
   KC_LCTL, ES_LBRC, ES_RBRC, ES_LABK, ES_RABK, ES_EQL,  ES_0,    ES_1,    ES_2,    ES_3,    ES_DOT,  KC_RSFT,
   KC_NO,   _______, KC_LGUI, _______, KC_SPC,      RGB_MOD     , KC_ENT,  _______, KC_LALT, KC_NO,   KC_RIGHT_CTRL
),

/* Extend (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |  º   |  ¡   |  @   |  €   |  $   |  `   |  ⏮  | ⏯  | ⏭  |  🔉  |  🔊 |  🔇  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LSFT |  ª   |  &   |  |   |  \   |  ¿   | RTog | HUE▲ | SAt▲ |BRGHT▲|SPEWD▲|      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LCTL |      |  ¬   |  ç   |  %   |  ~   | RMode| HUE▼ | SAt▼ |BRGHT▼|SPEED▼| RESET|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  ___ | GUI  |  ___ | SPACE|   RGB_MOD   |ENTER |  ___ | LALT |      |DVORAK|
 * `-----------------------------------------------------------------------------------'
 */
[_EXTEND] = LAYOUT_planck_mit(
    ES_MORD, ES_IEXL, ES_AT,   ES_EURO, ES_DLR,  ES_GRV,  KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE,
    KC_LSFT, ES_FORD, ES_AMPR, ES_PIPE, ES_BSLS, ES_IQUE, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO,
    KC_LCTL, KC_NO,   ES_NOT,  ES_CCED, ES_PERC, ES_TILD, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, QK_REBOOT,
    KC_NO,   _______, KC_LGUI, _______, KC_SPC,      RGB_MOD     , KC_ENT,  _______, KC_LALT, KC_NO,   DVORAK
),

/* Mouse
 * ,-----------------------------------------------------------------------------------.
 * | ESC  | MB6  |      |      |      |      | Whel↑| Whel←|  ↑   | Whel→| MB6  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LSFT | MB5  | LMB  | MMB  | RMB  |      | Whel↓|  ←   |  ↓   |  →   | MB5  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LCTL | MB4  |Speed3|Speed2|Speed1|      | MB7  | LMB  | MMB  | RMB  | MB4  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  ___ | GUI  |  ___ | SPACE|   RGB_MOD   |ENTER |  ___ | LALT |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MOUSE] = LAYOUT_planck_mit(
    KC_ESC,   KC_BTN6, KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, KC_BTN6, KC_NO,
    KC_LSFT,  KC_BTN5, KC_BTN2, KC_BTN3, KC_BTN1,  KC_NO,  KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN5, KC_NO,
    KC_LCTL,  KC_BTN4, KC_ACL2, KC_ACL1, KC_ACL0,  KC_NO,  KC_BTN7, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN4, KC_NO,
    KC_NO,   _______,  KC_LGUI, _______, KC_SPC,      RGB_MOD     , KC_ENT,  _______, KC_LALT, KC_NO,   KC_NO
),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _EXTEND);
}

