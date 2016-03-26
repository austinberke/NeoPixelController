

void p_divide() {
  char width = NUM_LEDS / NUM_COLORS;
  int pos = 0;
  for (int i = 1; i <= NUM_COLORS; i++) {
    for ( ; pos != width * i; pos++) {
      leds[pos] = colors[i-1];
    }
  }
  FastLED.show();
}

void p_fade() {
  for (int i = 0; i != NUM_COLORS; i++) {
    CRGB curr = CRGB::Black;
    CRGB oneHundredth = CRGB(colors[i].r * 0.01, colors[i].g * 0.01, colors[i].b * 0.01);
    
    // ==> Fade up
    for (int j = 0; j != 100; j++) {
      setAll(curr);
      FastLED.show();
      curr += oneHundredth;
      delay(SPEED);
      
    }

    delay(SPEED*3);

    // ==> Fade down
    for (int j = 0; j != 100; j++) {
      setAll(curr);
      FastLED.show();
      curr -= oneHundredth;
      delay(SPEED);
    }

  }
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
  for (int i = 0; i != NUM_COLORS; i++) { 
    if (i%2 == 0) {
      for (int j = 0; j != NUM_LEDS-1; j++) {
        leds[j] = leds[j+1] = colors[i];
        FastLED.show();
        delay(SPEED);
        FastLED.clear();
      }
    }
    else {
      for (int j = NUM_LEDS-1; j != 0; j--) {
        leds[j] = leds[j-1] = colors[i];
        FastLED.show();
        delay(SPEED);
        FastLED.clear();
      }
      
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

void p_rand() {
  FastLED.clear();
  for (int i = 0; i != 10; i++) {
    leds[random(NUM_LEDS)] = colors[random(NUM_COLORS)];
  }
  FastLED.show();
  delay(SPEED);
}

void setAll(CRGB& c) {
  for (int i = 0; i != NUM_LEDS; i++) {
    leds[i] = c;
  }
}
