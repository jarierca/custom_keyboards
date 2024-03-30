/* Copyright 2023 jarierca
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

#pragma once

#define MOUSEKEY_DELAY 50
#define MIDI_ADVANCED
#define TAPPING_TERM 175 //For fast typing
#define QUICK_TAP_TERM 0 //No autorepeat in tap-hold keys
#define HOLD_ON_OTHER_KEY_PRESS //For fast typing
#define DYNAMIC_KEYMAP_LAYER_COUNT 6 //Number of layers

#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGB_MATRIX_ENABLE
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS //	Enables RGB_MATRIX_ALPHAS_MODS
#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN //	Enables RGB_MATRIX_GRADIENT_UP_DOWN
#    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT //	Enables RGB_MATRIX_GRADIENT_LEFT_RIGHT
//#    define ENABLE_RGB_MATRIX_BREATHING //	Enables RGB_MATRIX_BREATHING
//#    define ENABLE_RGB_MATRIX_BAND_SAT //	Enables RGB_MATRIX_BAND_SAT
//#    define ENABLE_RGB_MATRIX_BAND_VAL 	//Enables RGB_MATRIX_BAND_VAL
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT //	Enables RGB_MATRIX_BAND_PINWHEEL_SAT
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL //	Enables RGB_MATRIX_BAND_PINWHEEL_VAL
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT //	Enables RGB_MATRIX_BAND_SPIRAL_SAT
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL //	Enables RGB_MATRIX_BAND_SPIRAL_VAL
#    define ENABLE_RGB_MATRIX_CYCLE_ALL //	Enables RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT //	Enables RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN //	Enables RGB_MATRIX_CYCLE_UP_DOWN
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON //	Enables RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN 	//Enables RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL //	Enables RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL //	Enables RGB_MATRIX_CYCLE_PINWHEEL
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL //	Enables RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_DUAL_BEACON 	//Enables RGB_MATRIX_DUAL_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON// 	Enables RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS //	Enables RGB_MATRIX_RAINBOW_PINWHEELS
#    define ENABLE_RGB_MATRIX_RAINDROPS 	//Enables RGB_MATRIX_RAINDROPS
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS// 	Enables RGB_MATRIX_JELLYBEAN_RAINDROPS
//#    define ENABLE_RGB_MATRIX_HUE_BREATHING //	Enables RGB_MATRIX_HUE_BREATHING
#    define ENABLE_RGB_MATRIX_HUE_PENDULUM 	//Enables RGB_MATRIX_HUE_PENDULUM
#    define ENABLE_RGB_MATRIX_HUE_WAVE 	//Enables RGB_MATRIX_HUE_WAVE 
#    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL 	//Enables RGB_MATRIX_PIXEL_FRACTAL
#    define ENABLE_RGB_MATRIX_PIXEL_FLOW 	//Enables RGB_MATRIX_PIXEL_FLOW
#    define ENABLE_RGB_MATRIX_PIXEL_RAIN 	//Enables RGB_MATRIX_PIXEL_RAIN
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE //	Enables RGB_MATRIX_SOLID_REACTIVE_SIMPLE
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE //	Enables RGB_MATRIX_SOLID_REACTIVE
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE 	//Enables RGB_MATRIX_SOLID_REACTIVE_WIDE
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE //	Enables RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS //	Enables RGB_MATRIX_SOLID_REACTIVE_CROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS //	Enables RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
//#    define  ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS 	//Enables RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS 	//Enables RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
//#   define ENABLE_RGB_MATRIX_SPLASH 	//Enables RGB_MATRIX_SPLASH
#    define ENABLE_RGB_MATRIX_MULTISPLASH //	Enables RGB_MATRIX_MULTISPLASH
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH 	//Enables RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH //	Enables RGB_MATRIX_SOLID_MULTISPLASH
#endif