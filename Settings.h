/* NeoPixelController
      Settings.h
   A versatile Arduino program for controlling a NeoPixel LED strip.
   Copyright 2016 Austin Berke
*/

#ifndef SETTINGS_H
#define SETTINGS_H


#define LED_TYPE    NEOPIXEL

// ==> Define pin and number of LEDs for first strip
#define LED_PIN_1     2 // Pin 2 is orange on first Cat6 cable for OctoWS2811
#define NUM_LEDS_1    480


// ==> Define pin and number of LEDs for second strip
#define LED_PIN_2     6 // Pin 6 is orange on second Cat6 cable for OctoWS2811
#define NUM_LEDS_2    240


#define BRIGHTNESS  150

enum Mode {
  DIVIDE,
  ROLLING_DIVIDE,
  STRIPES,
  ROLLING_STRIPES,
  GRADIENT,
  ROLLING_GRADIENT,
  FADE,
  HALF_FADE,
  THREE_FADE,
  BLINK,
  ABLINK,
  BOUNCE,
  SWEEP,
  SPARKLE
};

/* ==================================== */
#define PALETTE  PartyColors_p
#define MODE ABLINK
#define SPEED 100
/* =================================== */

CRGBPalette16 palette = PALETTE;
CRGB* colors = palette.entries;

// ==> NUM_LEDS_MAX is the largest amount of LEDs on a single strip; 
//     the smaller strip will mirror the first as long as it can
// ==> Similarly, NUM_LEDS_MIN is the smallest amount of LEDs on 
//     a single strip
const int NUM_LEDS_MAX = NUM_LEDS_1 > NUM_LEDS_2 ? NUM_LEDS_1 : NUM_LEDS_2;
const int NUM_LEDS_MIN = NUM_LEDS_1 < NUM_LEDS_2 ? NUM_LEDS_1 : NUM_LEDS_2;
CRGB leds[NUM_LEDS_MAX];

typedef CRGBPalette16 Palette;

#endif /* SETTINGS_H */
