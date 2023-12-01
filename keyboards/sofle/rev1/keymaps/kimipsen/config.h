#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define MASTER_LEFT
#define ENCODER_DIRECTION_FLIP

#define LAYER_STATE_8BIT


// RGB
#define RGBLIGHT_SLEEP
//
#define RGBLIGHT_LAYERS

/* ws2812 RGB LED */
#define RGB_DI_PIN D3



#undef RGBLED_NUM

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

#define RGBLED_NUM 72
//#define RGBLED_SPLIT
#define RGBLED_SPLIT \
    { 36, 36 } // haven't figured out how to use this yet

//#define RGBLED_NUM 30
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
