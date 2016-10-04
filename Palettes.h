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

// Gradient palette "sky_45_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/rafi/tn/sky-45.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( sky_45_gp ) {
    0, 249,205,  4,
   51, 255,239,123,
   87,   5,141, 85,
  178,   1, 26, 43,
  255,   0,  2, 23};



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

  DEFINE_GRADIENT_PALETTE( Red_gp ) {
  0, 255, 0, 0,
  128, 255, 1, 1,
  255, 255, 0, 0};

 DEFINE_GRADIENT_PALETTE( RedGreenBlue_gp ) {
  0, 255, 0, 0,
  128, 0, 255, 0,
  255, 0, 0, 255};

  DEFINE_GRADIENT_PALETTE ( RWBStripe_gp ) {
    0, 0, 0, 0,
    120, 0, 0, 0,
    121, 0, 0, 255,
    130, 255, 255, 255,
    139, 255, 0, 0,
    140, 0, 0, 0,
    255, 0, 0, 0};

 DEFINE_GRADIENT_PALETTE ( TriStripe_gp ) {
    0, 0, 0, 0,
    120, 0, 0, 0,
    121, 27, 13, 43,
    130, 54, 34, 255,
    139, 27, 13, 43,
    140, 0, 0, 0,
    255, 0, 0, 0};    
    
DEFINE_GRADIENT_PALETTE ( WhiteStripe_gp ) {
    0, 0, 0, 0,
    120, 0, 0, 0,
    121, 255, 255, 255,
    139, 255, 255, 255,
    140, 0, 0, 0,
    255, 0, 0, 0};

DEFINE_GRADIENT_PALETTE ( TwoStripes_gp ) {
    0, 0, 0, 0,
    56, 0, 0, 0,
    60, 255, 0, 0,
    64, 0, 0, 0,
    176, 0, 0, 0,
    180, 0, 0, 255,
    184, 0, 0, 0,
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

DEFINE_GRADIENT_PALETTE( thetachi_gp ) {
  0, 255, 0, 0,
  127, 255, 0, 0,
  128, 255, 255, 255,
  255, 255, 255, 255}; 

extern const TProgmemRGBPalette16 WarmStripeColors_p FL_PROGMEM =   
{
  CRGB::Violet, 0x000000, 
  CRGB::DeepPink, 0x000000,
  CRGB::Red, 0x000000, 
  CRGB::DarkOrange, 0x000000,
  CRGB::Yellow, 0x000000, 
  CRGB::DarkOrange, 0x000000,
  CRGB::Red, 0x000000, 
  CRGB::DeepPink, 0x000000
};

extern const TProgmemRGBPalette16 CoolStripeColors_p FL_PROGMEM =   
{
  CRGB::Cyan, 0x000000, 
  CRGB::ForestGreen, 0x000000,
  CRGB::Cyan, 0x000000, 
  CRGB::ForestGreen, 0x000000,
  CRGB::Cyan, 0x000000, 
  CRGB::ForestGreen, 0x000000,
  CRGB::Cyan, 0x000000, 
  CRGB::ForestGreen, 0x000000
};

extern const TProgmemRGBPalette16 Green_p FL_PROGMEM =   
{
  CRGB::Green, CRGB::Green, CRGB::Green, CRGB::Green, 
  CRGB::Green, CRGB::Green, CRGB::Green, CRGB::Green, 
  CRGB::Green, CRGB::Green, CRGB::Green, CRGB::Green, 
  CRGB::Green, CRGB::Green, CRGB::Green, CRGB::Black, 
  
};
#endif /* PALETTES_H */
