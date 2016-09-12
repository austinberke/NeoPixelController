/* NeoPixelController
 *    Modes.h
 * A versatile Arduino program for controlling a NeoPixel LED strip.
 * Copyright 2016 Austin Berke
 */
 
#ifndef MODES_H
#define MODES_H

#include "Settings.h"

void setAll(CRGB& c);

/* =================
   DIVIDE:
   Statically display all colors in palette in distinct divisions.
*/ =================
void p_divide() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, i, BRIGHTNESS, NOBLEND);
  }
  FastLED.show();
}

/* =================
   ROLLING_DIVIDE:
   Display all colors in palette in distinct divisions moving forward at a constant rate.
*/ =================
void p_rolling_divide() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, i + millis()/SPEED, BRIGHTNESS, NOBLEND);
  }
  FastLED.show();
}

/* =================
   STRIPES:
   Statically display all colors in palette in small distinct divisions.
*/ =================
void p_stripes() {
  for (int i = 0; i != NUM_LEDS; i++) { 
    leds[i] = ColorFromPalette(palette, (i*8), BRIGHTNESS, NOBLEND); 
  }
  FastLED.show();
}

/* =================
   ROLLING_STRIPES:
   Display all colors in palette in small distinct divisions moving forward at a constant rate.
*/ =================
void p_rolling_stripes() {
  for (int i = 0; i != NUM_LEDS; i++) { 
    leds[i] = ColorFromPalette(palette, (i*8) + millis()/SPEED, BRIGHTNESS, NOBLEND); 
  }
  FastLED.show();
}

/* =================
   GRADIENT:
   Statically display all colors in palette as a smooth gradient.
*/ =================
void p_gradient() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, i, BRIGHTNESS, LINEARBLEND);
  }
  FastLED.show();
}

/* =================
   ROLLING_GRADIENT:
   Display all colors in palette as a smooth gradient moving forward at a constant rate.
*/ =================
void p_rolling_gradient() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, i + millis()/SPEED, BRIGHTNESS, LINEARBLEND);
  }
  FastLED.show();
}

/* =================
   FADE:
   Cycle all LEDs through the palette colors at a constant rate.
*/ =================
void p_fade() {
  for (int i = 0; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, millis()/SPEED, BRIGHTNESS, LINEARBLEND);
  }
  FastLED.show();
}

/* =================
   HALF_FADE:
   Cycle all LEDs through the palette colors at a constant rate, 
   with the second half of the LEDs at the complementary position in the palette.
*/ =================
void p_half_fade() {
  for (int i = 0; i != NUM_LEDS/2; i++) {
     leds[i] = ColorFromPalette(palette, millis()/SPEED, BRIGHTNESS, LINEARBLEND);
  }
  for (int i = NUM_LEDS/2; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, millis()/SPEED+128, BRIGHTNESS, LINEARBLEND);
  }
  FastLED.show();
}

/* =================
   THREE_FADE:
   Cycle all LEDs through the palette colors at a constant rate, 
   with three segments of the LEDs at triadic positions in the palette.
*/ =================
void p_three_fade() {
  for (int i = 0; i != NUM_LEDS/2; i++) {
     leds[i] = ColorFromPalette(palette, millis()/SPEED, BRIGHTNESS, LINEARBLEND);
  }
  for (int i = NUM_LEDS/2; i != NUM_LEDS*3/4; i++) {
     leds[i] = ColorFromPalette(palette, millis()/SPEED+64, BRIGHTNESS, LINEARBLEND);
  }
  for (int i = NUM_LEDS*3/4; i != NUM_LEDS; i++) {
     leds[i] = ColorFromPalette(palette, millis()/SPEED+192, BRIGHTNESS, LINEARBLEND);
  }
  FastLED.show();
}

/* =================
   BLINK:
   Discretely jump through the palette colors, blinking in alternating two's.
*/ =================
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

/* =================
   BOUNCE:
   Send a short ray of light bouncing back and forth through the entire LED array and 
   change to next palette color at each end.
*/ =================
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

/* =================
   SWEEP:
   Send a ray of light bouncing back and forth through the entire LED array and 
   change to next palette color at each end, leaving behind a trail of its color.
*/ =================
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

/* =================
   ASWEEP:
   Send a ray of light bouncing back and forth through the entire LED array and 
   change to next palette color at each end, leaving behind a trail of its color.
   Colors alternate in two's between the current and next palette color.
*/ =================
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

/* =================
   SPARKLE:
   Ten segments of ten LEDs are set to a random color from the palette at each update.
*/ =================
void p_sparkle() {
  FastLED.clear();
  for (int i = 0; i != 10; i++) {
    int r = random(NUM_LEDS-(10+1));
    int j = random8();
    for (int i = 0; i != 10; i++) {
      leds[r+i] = ColorFromPalette(palette, j);
    }
  }
  FastLED.show();
  delay(SPEED*10);
}

void setAll(CRGB& c) {
  for (int i = 0; i != NUM_LEDS; i++) {
    leds[i] = c;
  }
}

#endif /* MODES_H */
