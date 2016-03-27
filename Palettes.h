/* NeoPixelController
 *    Palettes.h
 * A versatile Arduino program for controlling a NeoPixel LED strip.
 * Copyright 2016 Austin Berke
 */

#ifndef PALETTES_H
#define PALETTES_H

// FastLED Presets:
//    RainbowColors_p, RainbowStripeColors_p, OceanColors_p,
//    CloudColors_p, LavaColors_p, ForestColors_p, and PartyColors_p.


// Gradient palette "elevation_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/grass/tn/elevation.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE(elevation_gp) {
    0,   0,135,123,
   51,   0,255,  0,
  102, 255,255,  0,
  153, 255, 55,  0,
  204, 120, 55,  7,
  255,   1,  1,  1};

// Gradient palette "carrot_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/neota/food/tn/carrot.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 44 bytes of program space.

DEFINE_GRADIENT_PALETTE( carrot_gp ) {
    0,   0,  0,  0,
   25,   3,  1,  0,
   50,  23,  2,  0,
   85,  82, 10,  0,
  120, 192, 24,  0,
  158, 220, 57,  5,
  195, 252,108, 31,
  224, 252,173,111,
  254, 255,255,255,
  254, 255,255,255,
  255, 255,255,255};


#endif /* PALETTES_H */
