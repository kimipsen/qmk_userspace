#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
// #define SOFT_SERIAL_PIN D2
// #define ENCODER_DIRECTION_FLIP

// #define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
// #define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }

#define LAYER_STATE_8BIT


// // RGB
// #define RGBLIGHT_SPLIT
// #define RGBLIGHT_DEFAULT_ON true
// #define WS2812_DI_PIN D3
// #define RGBLED_SPLIT { 36, 36 } // haven't figured out how to use this yet

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_LAYERS
    #undef RGBLED_NUM
    #define RGBLED_NUM 72
    #define RGBLED_SPLIT \
        { 36, 36 } // haven't figured out how to use this yet

    //#define RGBLIGHT_ANIMATIONS
	//#define RGBLIGHT_EFFECT_BREATHING
	#define RGBLIGHT_EFFECT_RAINBOW_MOOD
	//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
	//#define RGBLIGHT_EFFECT_SNAKE
	//#define RGBLIGHT_EFFECT_KNIGHT
    //#define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    //#define RGBLIGHT_EFFECT_RGB_TEST
	//#define RGBLIGHT_EFFECT_ALTERNATING
	//#define RGBLIGHT_EFFECT_TWINKLE
    //#define RGBLED_SPLIT

    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif