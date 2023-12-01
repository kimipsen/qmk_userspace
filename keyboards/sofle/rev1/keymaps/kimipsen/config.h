#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define MASTER_LEFT
#define ENCODER_DIRECTION_FLIP

#define LAYER_STATE_8BIT


// RGB
#define RGBLIGHT_SPLIT
#define RGBLIGHT_SLEEP
#define RGBLIGHT_DEFAULT_ON true
#define RGBLIGHT_LAYERS
#define RGBLED_NUM 72
#define WS2812_DI_PIN D3
#define RGBLED_SPLIT { 36, 36 } // haven't figured out how to use this yet