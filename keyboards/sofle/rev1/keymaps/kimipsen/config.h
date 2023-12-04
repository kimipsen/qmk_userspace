#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define LAYER_STATE_8BIT

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif

/*
    Documentation for RGB
    see https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgblight.md
*/
#ifdef RGBLIGHT_ENABLE
    #define RGBLED_NUM 72
    #define RGBLED_SPLIT { 36, 36 } // haven't figured out how to use this yet
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_LAYERS

    // keep animations for effects
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT

    // remove animations to save space
    #undef RGBLIGHT_EFFECT_BREATHING
    #undef RGBLIGHT_EFFECT_RAINBOW_MOOD
    #undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #undef RGBLIGHT_EFFECT_SNAKE
    #undef RGBLIGHT_EFFECT_KNIGHT
    #undef RGBLIGHT_EFFECT_RGB_TEST
    #undef RGBLIGHT_EFFECT_ALTERNATING
    #undef RGBLIGHT_EFFECT_TWINKLE

    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17

    #define RGBLIGHT_DEFAULT_ON true
    #define WS2812_DI_PIN D3

    // For x-mas:
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_EFFECT_CHRISTMAS
    // Otherwise:
    // #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_EFFECT_STATIC_GRADIENT

#endif