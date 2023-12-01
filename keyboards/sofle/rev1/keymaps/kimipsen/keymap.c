#include QMK_KEYBOARD_H

enum sofle_layers {
    _DEFAULTS = 0,
    _QWERTY = 0,
    _COLEMAK,
	_COLEMAKDH,
    _LOWER,
    _RAISE,
    _ADJUST,
    _NUMPAD,
    _SWITCH
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_COLEMAK,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | LEAD |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_QWERTY] = LAYOUT(
  KC_LEAD,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     LT(_SWITCH,KC_6),    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV, \
  KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC, \
  LT(_NUMPAD,KC_TAB),   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT, \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, LCTL(LSFT(KC_F5)),     LALT(KC_PSCR), KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT, \
                 KC_LGUI,KC_LALT,KC_LCTL, KC_LOWER, KC_ENT,      KC_SPC,  KC_RAISE, KC_RCTL, KC_RALT, KC_RGUI \
),

/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | trans|   1  |   2  |   3  |   4  |   5  |                    | trans|   7  |   8  |   9  |   0  | trans|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | trans|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  | trans|
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | trans|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  | trans|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_COLEMAK] = LAYOUT(
  KC_TRNS,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_TRNS,    KC_7,   KC_8,    KC_9,    KC_0,    KC_TRNS,
  KC_TRNS,  KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_TRNS,
  KC_TRNS,  KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,   KC_E,    KC_I,    KC_O,    KC_TRNS,
  KC_TRNS,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_TRNS,    KC_TRNS,KC_K,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
),

/*
 * COLEMAK-DH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | trans|   1  |   2  |   3  |   4  |   5  |                    | trans|   7  |   8  |   9  |   0  | trans|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  | trans|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  | trans|
 * |------+------+------+------+------+------|  MUTE |    |DISCORD|------+------+------+------+------+------|
 * | trans|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  | trans|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Bspc | WIN  |LOWER | Enter| /Space  /       \Enter \  |SPACE |RAISE | RCTR | RAlt |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_COLEMAKDH] = LAYOUT(
  KC_TRNS,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_TRNS,    KC_7,   KC_8,    KC_9,    KC_0,    KC_TRNS,
  KC_TRNS,  KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                      KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_TRNS,
  KC_TRNS,  KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                      KC_M,    KC_N,   KC_E,    KC_I,    KC_O,    KC_TRNS,
  KC_TRNS,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V,  KC_TRNS,    KC_TRNS,KC_K,    KC_H,   KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
),

/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | trans|  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |MUTE Te|------+------+------+------+------+------|
 * | trans|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Bspc | WIN  |LOWER | Enter| /Space  /       \Enter \  |SPACE |RAISE | RCTR | RAlt |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT(
  KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       LT(_SWITCH,KC_F6),   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,\
  KC_TRNS,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12, \
  KC_TRNS, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, \
  KC_TRNS,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, KC_TRNS,       RCS(KC_M), KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, KC_TRNS, \
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS\
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * | trans| trans| trans| trans| trans| trans|                    | trans| trans| trans| trans| trans| trans|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans| Ins  | Pscr | Menu |      |      |                    | pg up| PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans| LAt  | LCtl |LShift|      | Caps |-------.    ,-------| pg dn| Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
 * | trans| Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | trans|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT(
  KC_TRNS, KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,                           KC_TRNS,  KC_TRNS  , KC_TRNS,  KC_TRNS ,  KC_TRNS ,KC_TRNS, \
  KC_TRNS,  KC_INS,  KC_PSCR,   KC_APP,  KC_NO, KC_NO,                        KC_PGUP, KC_PRVWD,   KC_UP, KC_NXTWD,KC_DLINE, KC_BSPC, \
  KC_TRNS, KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO, KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC, \
  KC_TRNS,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, KC_NO,  KC_TRNS,       KC_TRNS,  KC_NO, KC_LSTRT, KC_NO, KC_LEND,   KC_NO, KC_TRNS, \
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |Ereset|      |      |      |      |      |                    | trans|      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | RESET|      |      |      |      |      |                    |M BTN1| M UP |<M LFT|M BTN2|      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |RGB_TOG|hue^ |sat ^ | val ^|CLMAKD|COLEMAK|-------.   ,-------|desk <| M DWN| M RG>|desk >|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | mode | hue dn|sat d|val dn|MACWIN|QWERTY|-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT(
  EE_CLR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  QK_RBT,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                    KC_MS_BTN1, KC_MS_UP, KC_MS_LEFT, KC_MS_BTN2, KC_NO, KC_NO,
  RGB_TOG, RGB_HUI,RGB_SAI, RGB_VAI, KC_COLEMAKDH,KC_COLEMAK,             C(G(KC_LEFT)),KC_MS_DOWN,KC_MS_RIGHT,C(G(KC_RGHT)),KC_NO, KC_NO,
  RGB_MOD, RGB_HUD,RGB_SAD, RGB_VAD, CG_TOGG,KC_QWERTY,KC_TRNS,   KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO,
                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
/* NUMPAD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | trans|      |      |      |      |      |                    | trans|      |      |      |      |     |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |   ^  |   7  |   8  |   9  |   *  | trans|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|   -  |   4  |   5  |   6  |   =  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|   +  |   1  |   2  |   3  |   \  | trans|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Bspc | MEH  |LOWER | Enter| /Space  /       \Enter \  |SPACE | 0    |  .   | RAlt |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_NUMPAD] = LAYOUT(
  KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_TRNS, KC_NO, KC_NO, KC_NO,KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_CIRC, KC_P7,  KC_P8,   KC_P9,   KC_ASTR, KC_TRNS,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_MINS, KC_P4,  KC_P5,   KC_P6,   KC_EQL,  KC_PIPE,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_TRNS,    KC_TRNS,KC_PLUS, KC_P1, KC_P2,   KC_P3,   KC_SLSH, KC_TRNS,
              KC_TRNS, OSM(MOD_MEH), KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_P0, KC_PDOT, KC_TRNS
),

/* SWITCH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | trans|      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | cole | qwer | low  |raise | adj  |numpd |                    |      |switch|      |      |      | reset|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |Bri U |      |      |      |-------.    ,-------|      |      |      |      |      |Ereset|
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * | sleep|      |Bri D |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  // layer switcher
[_SWITCH] = LAYOUT(
  KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO,KC_NO, KC_NO,
  TO(1),   TO(0),   TO(3),   TO(4),   TO(5),   TO(6), 					         KC_NO,   TO(7),   KC_NO,   KC_NO,   KC_NO,   QK_RBT,
  KC_NO,   KC_NO, KC_BRIU,   KC_NO,   KC_NO,   KC_NO, 					         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, EE_CLR,
  KC_SYSTEM_SLEEP,KC_NO,KC_BRID,KC_NO,KC_NO,   KC_NO, KC_NO,	     KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
				        KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO
),
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 
        0x01, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 
        0xe1, 0xff, 0xe0, 0xff, 0xe1, 0xff, 0xc0, 0xff, 0xe1, 0xff, 0x80, 0xff, 0xe1, 0xff, 0x00, 0xff, 
        0xe1, 0xfe, 0x0f, 0xff, 0xe1, 0xfc, 0x1f, 0xff, 0xe1, 0xf8, 0x3f, 0xff, 0xe1, 0xf0, 0x7f, 0xff, 
        0xe1, 0xe0, 0xff, 0xff, 0xe1, 0xc1, 0xff, 0xff, 0xe1, 0x83, 0xff, 0xff, 0xe1, 0x03, 0xff, 0xff, 
        0xe0, 0x01, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x30, 0x7f, 0xff, 0xe0, 0x78, 0x3f, 0xff, 
        0xe0, 0xf8, 0x3f, 0xff, 0xe1, 0xfc, 0x1f, 0xff, 0xe1, 0xfe, 0x0f, 0xff, 0xc1, 0xff, 0x07, 0xff, 
        0x00, 0x7f, 0x80, 0xff, 0x00, 0x3f, 0xc0, 0xff, 0x00, 0x7f, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        case _COLEMAK:
            oled_write_ln_P(PSTR("Clmk"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adj\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

#endif
