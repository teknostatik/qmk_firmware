#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_60_hhkb(
    KC_ESC,   KC_1,     KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_GRV,  KC_BSPC,
    KC_TAB,   KC_Q,     KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC,          KC_NUBS,
    MT(MOD_LCTL, KC_NUHS),  KC_A,     KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,
    KC_LSFT,            KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  CTL_T(KC_LCTL),
    MO(1),  KC_LALT,                KC_SPC,                            KC_LALT,  MT(MOD_LGUI, KC_F5),         ),
    

    [1] = LAYOUT_60_hhkb(
    QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,  KC_TRNS,  KC_TRNS,
    KC_TRNS, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  BR_DEC,  BR_INC,   ES_DEC,  ES_INC,   KC_UP,    KC_TRNS,           KC_DEL,
    KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, KC_LEFT,  KC_RGHT,            KC_TRNS,
    KC_TRNS,          KC_TRNS, S1_DEC,  S1_INC,  KC_HOME,  KC_HOME,  KC_PGDN, KC_PGUP,  KC_END,  KC_TRNS,  KC_TRNS,  KC_TRNS,           KC_TRNS,
    KC_TRNS, KC_TRNS,                 KC_TRNS,                                        KC_TRNS,  KC_TRNS,        ),

};
