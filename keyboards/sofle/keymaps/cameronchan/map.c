#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PGUP, KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_PGDN, KC_CAPS, LALT_T(KC_A), LGUI_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RGUI_T(KC_L), RALT_T(KC_SCLN), KC_QUOT, KC_ESC, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_CAPS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, LSFT(KC_INS), TO(4), LT(4,KC_UNDS), LT(1,KC_TAB), KC_SPC, KC_ENT, KC_BSPC, KC_DEL, TO(2), TO(3)),
	[1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AMPR, KC_GT, KC_LCBR, KC_RCBR, KC_PIPE, KC_DLR, KC_NO, KC_NO, KC_NO, KC_ESC, KC_BSPC, KC_NO, KC_EXLM, KC_EQL, KC_LPRN, KC_RPRN, KC_MINS, KC_PERC, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_UNDS, KC_LT, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS),
	[2] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_ESC, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_F12, KC_NO, LSFT(KC_Q), KC_LCTL, KC_LSFT, OSM(MOD_LGUI), KC_ESC, KC_GRV, KC_4, KC_5, KC_6, KC_0, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_ESC, KC_NO, KC_TRNS, KC_TRNS, LSFT(KC_N), KC_1, KC_2, KC_3, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_NO),
	[3] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_ESC, KC_NO, KC_NO, KC_HOME, KC_UP, KC_END, KC_NO, KC_F12, KC_NO, LSFT(KC_Q), KC_LCTL, KC_LSFT, OSM(MOD_LGUI), KC_ESC, KC_F, KC_LEFT, KC_DOWN, KC_RGHT, KC_R, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_ESC, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_QUES, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, TO(0)),
	[4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_TRNS, KC_TRNS, KC_J, KC_K, KC_L, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, TO(0), KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




