/* NeoPixelController
 *    NeoPixelController.ino
 * A versatile Arduino program for controlling a NeoPixel LED strip.
 * Copyright 2016 Austin Berke
 */

#include <FastLED.h>
#include "Palettes.h"
#include "Modes.h"
#include "Settings.h"

void displayPattern(byte m);

void setup() { 
  // ==> Set up LEDs connected to first data pin
  FastLED.addLeds<LED_TYPE, LED_PIN_1>(leds, NUM_LEDS_1).setCorrection(TypicalLEDStrip);
  // ==> Set up LEDs connected to second data pin, mirrored from first
  FastLED.addLeds<LED_TYPE, LED_PIN_2>(leds, NUM_LEDS_2).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
}
void loop() { 
 displayPattern(MODE);
}

void displayPattern(byte m) {
  switch (m) {
    default:
    case DIVIDE:
      p_divide();
      break;
    case ROLLING_DIVIDE:
      p_rolling_divide();
      break;
    case STRIPES:
      p_stripes();
      break;
    case ROLLING_STRIPES:
      p_rolling_stripes();
      break;
    case GRADIENT:
      p_gradient();
      break;
    case ROLLING_GRADIENT:
      p_rolling_gradient();
      break;
    case FADE:
      p_fade();
      break;
    case HALF_FADE:
      p_half_fade();
      break;
    case THREE_FADE:
      p_three_fade();
      break;
    case BLINK:
      p_blink();
      break;
    case BOUNCE:
      p_bounce();
      break;
    case SWEEP:
      p_sweep();
      break;
   case SPARKLE:
      p_sparkle();
      break;
   }
}
