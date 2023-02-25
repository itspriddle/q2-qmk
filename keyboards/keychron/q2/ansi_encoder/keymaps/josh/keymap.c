/* Copyright 2021 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

enum layers{
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};

// Custom keykodes
enum my_keycodes {
  KC_BRI_MAX = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_67(
        KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_HOME,
        KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,           KC_PGUP,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT, KC_UP,
        KC_LCTL, KC_LOPTN, KC_LCMMD,                           KC_SPC,                             KC_RCMMD, MO(_FN1), MO(_FN3), KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_BASE] = LAYOUT_ansi_67(
        KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_HOME,
        KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,           KC_PGUP,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,                            KC_SPC,                             KC_RALT,  MO(_FN2), MO(_FN3), KC_LEFT, KC_DOWN, KC_RGHT),

    [_FN1] = LAYOUT_ansi_67(
        KC_ESC,  KC_BRID,  KC_BRIU, KC_MCTL, KC_LPAD, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,           RGB_TOG,
        RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______,  _______,            _______,          _______,
        _______,           _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______,  _______,            _______, _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______, _______, _______),

    [_FN2] = LAYOUT_ansi_67(
        KC_ESC,  KC_BRID,  KC_BRIU, KC_TASK, KC_FLXP, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,           RGB_TOG,
        RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______,  _______,            _______,          _______,
        _______,           _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______,  _______,            _______, _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______, _______, _______),

    [_FN3] = LAYOUT_ansi_67(
        KC_TILD, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,          KC_BRI_MAX,
        RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______,  _______,            _______,          _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______, _______,
        _______, _______,  _______,                            RESET,                              _______,  _______,  _______,  _______, _______, _______)
};

bool dip_is_mac;

bool dip_switch_update_user(uint8_t index, bool active) {
  if (index == 0) {
    dip_is_mac = !active;
  }

  return true;
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_FN1]     = { ENCODER_CCW_CW(KC_BRID, KC_BRIU) },
    [_FN2]     = { ENCODER_CCW_CW(KC_BRID, KC_BRIU) },
    [_FN3]     = { ENCODER_CCW_CW(KC_BRID, KC_BRIU) },
};
#else
// TODO: This might be interesting...
// https://www.reddit.com/r/olkb/comments/sp707f/reduce_encoder_sensitivity_for_media_skipping/
bool encoder_update_user(uint8_t index, bool clockwise) {
  // Turn knob with no mods pressed
  if (IS_LAYER_ON(MAC_BASE) || IS_LAYER_ON(WIN_BASE)) {
    if (dip_is_mac) {
      if (get_mods() & MOD_MASK_CTRL) {
        tap_code16(LCTL(clockwise ? KC_WH_U : KC_WH_D));
      } else {
        // Mac: Vol up/down in small increments
        tap_code16(LSFT(LOPT(clockwise ? KC_VOLU : KC_VOLD)));
      }
    } else {
      // Win: Vol up/down
      tap_code16(clockwise ? KC_VOLU : KC_VOLD);
    }

  // Turn knob with FN1 pressed
  } else if (IS_LAYER_ON(_FN1) || IS_LAYER_ON(_FN2)) {
    if (dip_is_mac) {
      // Mac: Brightness up/down on primary display in small increments
      tap_code16(LSFT(LOPT(clockwise ? KC_BRIU : KC_BRID)));
    } else {
      // Windows: brightness up/down
      tap_code16(clockwise ? KC_BRIU : KC_BRID);
    }

  // Turn knob with FN2 pressed
  } else if (IS_LAYER_ON(_FN3)) {
    if (dip_is_mac) {
      // Mac: Brightness up/down on secondary display in small increments
      tap_code16(LSFT(LOPT(LCTL(clockwise ? KC_BRIU : KC_BRID))));
    } else {
      // Win: Brightness up/down
      tap_code16(clockwise ? KC_BRIU : KC_BRID);
    }
  }

  return true;
}
#endif

#ifdef RGB_MATRIX_ENABLE
// void rgb_matrix_init_user(void) {
//   rgb_matrix_disable_noeeprom();
// }
#endif

uint8_t mod_state;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // https://github.com/qmk/qmk_firmware/blob/master/keyboards/keychron/common/keychron_common.c#L42
  if (!process_record_keychron(keycode, record)) {
    return false;
  }

  mod_state = get_mods();

  switch (keycode) {
    case KC_BRI_MAX:
      if (record->event.pressed) {
        clear_mods();
        for (int i = 0; i < 100; i++) {
          tap_code16(LCTL(KC_BRIU));
        }
      } else {
        set_mods(mod_state);
      }
      break;
  }

  return true;
}
