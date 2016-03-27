/* NeoPixelController
 *    NeoPixelController.ino
 * A versatile Arduino program for controlling a NeoPixel LED strip.
 * Copyright 2016 Austin Berke
 */

#include <FastLED.h>
#include "Palettes.h"
#include "Modes.h"
#include "Settings.h"

void setup() { 
  delay(3000); // power-up safety delay
  FastLED.setMaxPowerInVoltsAndMilliamps(MAX_V, MAX_A*1000);
  FastLED.addLeds<LED_TYPE, LED_PIN>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
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
    case GRADIENT:
      p_gradient();
      break;
    case ROLLING_GRADIENT:
      p_rolling_gradient();
      break;
    case FADE:
      p_fade();
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
    case ASWEEP:
      p_asweep();
     break;
   case SPARKLE:
      p_sparkle();
      break;
   }
}
