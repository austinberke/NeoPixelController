/* NeoPixelController
 *    Modes.h
 * A versatile Arduino program for controlling a NeoPixel LED strip.
 * Copyright 2016 Austin Berke
 */
 
#ifndef MODES_H
#define MODES_H

#include "Settings.h"

void setAll(CRGB& c);

void p_divide() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, i, BRIGHTNESS, NOBLEND);
  }
  FastLED.show();
}


void p_rolling_divide() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, i + millis()/SPEED, BRIGHTNESS, NOBLEND);
  }
  FastLED.show();
}

void p_stripes() {
  for (int i = 0; i != NUM_LEDS; i++) { 
    leds[i] = ColorFromPalette(palette, (i*8), BRIGHTNESS, NOBLEND); 
  }
  FastLED.show();
}

void p_rolling_stripes() {
  for (int i = 0; i != NUM_LEDS; i++) { 
    leds[i] = ColorFromPalette(palette, (i*8) + millis()/SPEED, BRIGHTNESS, NOBLEND); 
  }
  FastLED.show();
}

void p_gradient() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, i, BRIGHTNESS, LINEARBLEND);
  }
  FastLED.show();
}

void p_rolling_gradient() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, i + millis()/SPEED, BRIGHTNESS, LINEARBLEND);
  }
  FastLED.show();
}

void p_fade() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, millis()/SPEED, BRIGHTNESS, LINEARBLEND);
  }
  FastLED.show();
}

void p_blink() {
  for (int i = 0; i != NUM_COLORS; i++) {
    if (i % 2 == 0) {
     for (int j = 0; j < NUM_LEDS; j++) {
      if(j%4 < 2)
        leds[j] = colors[i];
      else
        leds[j] = CRGB::Black;
    }
  }
  else {
    for (int j = 0; j < NUM_LEDS; j++) {
      if(j%4 >= 2)
        leds[j] = colors[i];
      else
        leds[j] = CRGB::Black;
    }
  }
  FastLED.show();
  delay(SPEED);
}
}

void p_bounce() {
  bool direction = 1;
  for (int i = 0; i < 256; i+=32) { 
    if (direction) {
      for (int j = 0; j != NUM_LEDS-1; j++) {
        leds[j] = leds[j+1] = ColorFromPalette(palette, i);
        FastLED.show();
        delay(SPEED);
        FastLED.clear();
      }
      direction = 0;
    }
    else {
      for (int j = NUM_LEDS-1; j != 0; j--) {
        leds[j] = leds[j-1] = ColorFromPalette(palette, i);
        FastLED.show();
        delay(SPEED);
        FastLED.clear();
      }
      direction = 1;
    }
  }
}

void p_sweep() {
  for (int i = 0; i < NUM_COLORS; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j != NUM_LEDS; j++) {
        leds[j] = colors[i];
        FastLED.show();
        delay(SPEED);
      }
    }
    else {
      for (int j = NUM_LEDS-1; j != 0; j--) {
        leds[j] = colors[i];
        FastLED.show();
        delay(SPEED);
      }
    }
  }
}

void p_asweep() {
  for (int i = 0; i != NUM_COLORS-1; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < NUM_LEDS; j++) {
        if(j%4 < 2)
          leds[j] = colors[i];
        else
          leds[j] = colors[i+1];
        FastLED.show();
        delay(SPEED);
      }
    }
    else {
      for (int j = NUM_LEDS-1; j > 0; j--) {
        if(j%4 < 2)
          leds[j] = colors[i];
        else
          leds[j] = colors[i+1];
        FastLED.show();
        delay(SPEED);
      }  
    }
  }
}

void p_sparkle() {
  FastLED.clear();
  for (int i = 0; i != 30; i++) {
    int r = random(NUM_LEDS-1);
    int j = map(i, 0, 30, 0, 255);
    leds[r] = leds[r+1] = ColorFromPalette(palette, j);
  }
  FastLED.show();
  delay(SPEED);
}

void setAll(CRGB& c) {
  for (int i = 0; i != NUM_LEDS; i++) {
    leds[i] = c;
  }
}

#endif /* MODES_H */
