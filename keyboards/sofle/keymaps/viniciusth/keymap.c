// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#define INDICATOR_BRIGHTNESS 30

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * 0 lazy to change the comments
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[0] = LAYOUT(
  KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
  KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_BSLS,
  KC_LCTL,  KC_LGUI, KC_LALT, MO(1),  KC_UP, KC_LPRN, KC_NO,     KC_NO,  KC_RPRN, KC_DOWN, KC_NO,   KC_NO,   MO(1),    TG(1),
                 KC_NO, MO(2), KC_LEFT, KC_LBRC,      KC_SPC,    KC_ENT, KC_RBRC, KC_RGHT, KC_NO,   KC_NO
),
/*
 * 1
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[1] = LAYOUT(
  KC_TRNS,   KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,    KC_F7,    KC_F8,  KC_F9,   KC_F10,  KC_F11,
  KC_TRNS,   KC_NO,  KC_PERC, KC_PDOT, KC_PPLS, KC_PAST,                      KC_P7,    KC_P8,    KC_P9,  KC_NO,   KC_NO,   KC_F12,
  KC_TRNS,   KC_CIRC,KC_TILD, KC_PCMM, KC_PMNS, KC_PSLS,                      KC_P4,    KC_P5,    KC_P6,  KC_NO,   KC_NO,   KC_NUM_LOCK,
  KC_TRNS,   KC_TRNS,KC_TRNS, KC_TRNS, KC_AMPR, KC_EXLM, KC_NO,      KC_NO,   KC_P1,    KC_P2,    KC_P3,  KC_NO,   KC_TRNS, KC_TRNS,
                 KC_NO,  KC_AT,  KC_HASH,   KC_DLR,      KC_PEQL,    KC_PSCR, KC_P0, KC_NO, KC_NO, KC_NO
),
/* 2
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[2] = LAYOUT(
  KC_PWR,   KC_SLEP,  KC_WAKE, KC_NO, KC_MSTP, KC_MPLY,                       KC_BRIU, KC_BRID, KC_NO,   KC_NO, KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,   KC_NO, KC_VOLD, KC_VOLU,                       RGB_TOG, RGB_MOD, RGB_RMOD,KC_NO, KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,   KC_NO, KC_MPRV, KC_MNXT,                       BL_TOGG, BL_STEP, BL_BRTG, KC_NO, KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,  KC_NO,
                      KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
),
};

#ifdef RGBLIGHT_ENABLE
char layer_state_str[70];
// Now define the array of layers. Later layers take precedence

// letters have different colors, special functions have different colors
const rgblight_segment_t PROGMEM layer_0_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_BLUE}, // ESC
    {1, 10, HSV_WHITE}, // letters
    {11, 1, HSV_BLUE}, // Bspc
    {12, 1, HSV_BLUE}, // Tab
    {13, 9, HSV_WHITE},
    {22, 2, HSV_YELLOW}, // special characters
    {24, 1, HSV_BLUE}, // LSHIFT
    {25, 7, HSV_WHITE},
    {32, 4, HSV_YELLOW},
    {36, 3, HSV_BLUE}, // LCtrl, LGui, LAlt
    {39, 1, HSV_GREEN}, // MO(1)
    {40, 1, HSV_RED}, // up arrow
    {41, 1, HSV_YELLOW}, // (
    {44, 1, HSV_YELLOW}, // )
    {45, 1, HSV_RED}, // down arrow
    {48, 2, HSV_GREEN}, // MO(1), TG(1)
    {51, 1, HSV_GREEN}, // MO(2)
    {52, 1, HSV_RED}, // left arrow
    {53, 4, HSV_YELLOW}, // [{, space, enter, ]}
    {57, 1, HSV_RED} // right arrow
);

const rgblight_segment_t PROGMEM layer_1_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 13, HSV_BLUE}, // special
    {14, 4, HSV_RED}, // operators
    {18, 3, HSV_WHITE}, // numpad
    {23, 2, HSV_BLUE},
    {25, 5, HSV_RED},
    {30, 3, HSV_WHITE},
    {35, 1, HSV_GREEN}, // NUM LOCK
    {36, 4, HSV_BLUE},
    {40, 2, HSV_RED},
    {44, 3, HSV_WHITE},
    {48, 2, HSV_GREEN},
    {51, 4, HSV_RED},
    {55, 1, HSV_GREEN},
    {56, 1, HSV_WHITE} // 0
);

const rgblight_segment_t PROGMEM layer_2_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 3, HSV_GREEN}, // power, sleep, wake
    {4, 4, HSV_BLUE}, // fn keys
    {16, 2, HSV_BLUE}, // fn
    {18, 3, HSV_GREEN}, // rgb
    {28, 2, HSV_BLUE}, // fn
    {30, 3, HSV_GREEN} // backlight
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer_0_lights,
    layer_1_lights,
    layer_2_lights
);

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    return state;
}
void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;

	rgblight_mode(10);// haven't found a way to set this in a more useful way

}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SAFE_RANGE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(0);
            }
            return false;
        case SAFE_RANGE + 1:
            if (record->event.pressed) {
                set_single_persistent_default_layer(1);
            }
            return false;
        case SAFE_RANGE + 2:
            if (record->event.pressed) {
                set_single_persistent_default_layer(2);
            }
            return false;
    }
    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return false;
}
