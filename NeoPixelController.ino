#include <FastLED.h>

#define NUM_LEDS    240
#define LED_TYPE    NEOPIXEL
#define LED_PIN     6
#define MAX_V       5
#define MAX_A       7
#define BRIGHTNESS  255

#define NUM_COLORS  5
CRGB colors[NUM_COLORS] = { 
  CRGB::Red,
  CRGB::Cyan,
  CRGB::Green,
  CRGB::Yellow,
  CRGB::Blue
};

enum mode { 
  DIVIDE, 
  FADE, 
  BLINK,
  BOUNCE, 
  SWEEP, 
  ASWEEP, 
  RAND 
};

/* ============= */
#define MODE  BOUNCE
#define SPEED 2
/* ============= */

CRGB leds[NUM_LEDS];

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
   case RAND:
      p_rand();
      break;
   }
}
