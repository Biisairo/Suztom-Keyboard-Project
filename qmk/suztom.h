#ifndef SUZTOM_H
#define SUZTOM_H

#include "quantum.h"

#define LAYOUT_3x5_2_mouse( \
	K00, K01, K02, K03, K04, K44, K43, K42, K41, K40, \
	K10, K11, K12, K13, K14, K54, K53, K52, K51, K50, \
	K20, K21, K22, K23, K24, K64, K63, K62, K61, K60, \
	     K31, K32, K33, K34, K74, K73, K72, K71 \
) { \
	{ K00,   K01,   K02,   K03,   K04 }, \
	{ K10,   K11,   K12,   K13,   K14 }, \
	{ K20,   K21,   K22,   K23,   K24 }, \
	{ KC_NO, K31,   K32,   K33,   K34 }, \
	{ K40,   K41,   K42,   K43,   K44 }, \
	{ K50,   K51,   K52,   K53,   K54 }, \
	{ K60,   K61,   K62,   K63,   K64 }, \
	{ KC_NO, K71,   K72,   K73,   K74 }  \
}

#define LAYOUT LAYOUT_3x5_2_mouse

#define NOTUSED XXXXXXX

#endif