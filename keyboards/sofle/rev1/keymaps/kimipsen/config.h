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

#ifdef RGBLIGHT_ENABLE
    #define RGBLED_NUM 72
    #define RGBLED_SPLIT { 36, 36 } // haven't figured out how to use this yet
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_LAYERS

    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT

    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17

    #define RGBLIGHT_DEFAULT_ON true
// #define WS2812_DI_PIN D3
#endif