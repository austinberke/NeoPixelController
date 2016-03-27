/* NeoPixelController
 *    Palettes.h
 * A versatile Arduino program for controlling a NeoPixel LED strip.
 * Copyright 2016 Austin Berke
 */

#ifndef PALETTES_H
#define PALETTES_H

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

#endif /* PALETTES_H */
