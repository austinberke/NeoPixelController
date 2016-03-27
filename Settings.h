/* NeoPixelController
 *    Settings.h
 * A versatile Arduino program for controlling a NeoPixel LED strip.
 * Copyright 2016 Austin Berke
 */

#ifndef SETTINGS_H
#define SETTINGS_H

#define NUM_LEDS    240
#define LED_TYPE    NEOPIXEL
#define LED_PIN     6
#define MAX_V       5
#define MAX_A       7
#define BRIGHTNESS  100
#define NUM_COLORS  16

enum Mode { 
  DIVIDE,
  ROLLING_DIVIDE,
  GRADIENT,
  ROLLING_GRADIENT, 
  FADE, 
  BLINK,
  BOUNCE, 
  SWEEP, 
  ASWEEP, 
  RAND 
};

/* ==================================== */
#define PALETTE carrot_gp
#define MODE ROLLING_GRADIENT
#define SPEED 100
/* =================================== */

CRGBPalette16 palette = PALETTE;
CRGB* colors = palette.entries;

CRGB leds[NUM_LEDS];
typedef CRGBPalette16 Palette;

#endif /* SETTINGS_H */
