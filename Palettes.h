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

// Gradient palette "bhw1_01_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_01.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 12 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw1_01_gp ) {
    0, 227,101,  3,
  117, 194, 18, 19,
  255,  92,  8,192};
  
// Gradient palette "qual_dark_06_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ssz/tn/qual-dark-06.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 48 bytes of program space.

DEFINE_GRADIENT_PALETTE( qual_dark_06_gp ) {
    0,  16, 59,105,
   42,  16, 59,105,
   42, 142, 33, 51,
   84, 142, 33, 51,
   84, 199, 51, 32,
  127, 199, 51, 32,
  127, 192,161, 29,
  170, 192,161, 29,
  170,  58,133, 24,
  212,  58,133, 24,
  212,  17,133, 65,
  255,  17,133, 65};

  // Gradient palette "mexican_flag_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ocal/tn/mexican-flag.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( mexican_flag_gp ) {
    0,   0,255,  0,
   85,   0,255,  0,
   85, 255,255,255,
  169, 255,255,255,
  169, 255,  0,  0,
  255, 255,  0,  0};

// Gradient palette "Optimus_Prime_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/jjg/ccolo/vredeling/tn/Optimus_Prime.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 44 bytes of program space.

DEFINE_GRADIENT_PALETTE( Optimus_Prime_gp ) {
    0,   5, 16, 18,
   25,   5, 16, 18,
   51,   7, 25, 39,
   76,   8, 38, 71,
  102,  64, 99,106,
  127, 194,189,151,
  153, 182, 63, 42,
  178, 167,  6,  2,
  204, 100,  3,  1,
  229,  53,  1,  1,
  255,  53,  1,  1};

 DEFINE_GRADIENT_PALETTE( RedGreenBlue_gp ) {
  0, 255, 0, 0,
  128, 0, 255, 0,
  255, 0, 0, 255};

  DEFINE_GRADIENT_PALETTE ( RWBStripe_gp ) {
    0, 0, 0, 0,
    120, 0, 0, 0,
    121, 255, 0, 0,
    130, 255, 255, 255,
    139, 0, 0, 255,
    140, 0, 0, 0,
    255, 0, 0, 0};

// Gradient palette "liahlah2_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/rc/tn/liahlah2.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 40 bytes of program space.

DEFINE_GRADIENT_PALETTE( liahlah2_gp ) {
    0,  38, 73,145,
   30,   7, 19, 51,
   56,  73, 40,230,
   86,  55, 49,182,
  112,  15,135,250,
  140, 125,122,212,
  170,  13, 55,228,
  198, 123, 65,228,
  229,   7, 19, 51,
  255,  38, 73,145};

DEFINE_GRADIENT_PALETTE( ucla_gp ) {
  0, 50, 132, 191,
  127, 50, 132, 191,
  128, 255, 232, 0,
  255, 255, 232, 0};

#endif /* PALETTES_H */
