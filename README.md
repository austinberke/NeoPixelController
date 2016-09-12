# Introduction
NeoPixelController is a program whose purpose is to control one or more LED strips with several preset patterns and color palettes. It is currently designed to be used on a Teensy 3.2 with an OctoWS2811 adapter connected to two sets of NeoPixel (WS2812B) strips.

# Usage
Settings.h contains constants to adjust the program functionality as needed. Lines 41-45 can be used to update the current color palette, mode, and speed. Palettes are found in Palettes.h and can be modified or created either manually or using [PaletteKnife](http://fastled.io/tools/paletteknife/).

# Modes
|Mode   |Description   |
|---|---|
|DIVIDE   |Statically display all colors in palette in distinct divisions.   |
|ROLLING_DIVIDE  |Display all colors in palette in distinct divisions moving forward at a constant rate.   |
|STRIPES   |Statically display all colors in palette in small distinct divisions.   |
|ROLLING_STRIPES   |Display all colors in palette in small distinct divisions moving forward at a constant rate.   |
|GRADIENT   |Statically display all colors in palette as a smooth gradient.   |
|ROLLING_GRADIENT   |Display all colors in palette as a smooth gradient moving forward at a constant rate.   |
|FADE   |Cycle all LEDs through the palette colors at a constant rate.   |
|HALF_FADE   |Cycle all LEDs through the palette colors at a constant rate, with the second half of the LEDs at the complementary position in the palette.   |
|THREE_FADE   |Cycle all LEDs through the palette colors at a constant rate, with three segments of the LEDs at triadic positions in the palette.   |
|BLINK   |Discretely jump through the palette colors, blinking in alternating two's.   |
|BOUNCE   |Send a short ray of light bouncing back and forth through the entire LED array and change to next palette color at each end.  |
|SWEEP   |Send a ray of light bouncing back and forth through the entire LED array and change to next palette color at each end, leaving behind a trail of its color.   |
|SPARKLE   |Ten segments of ten LEDs are set to a random color from the palette at each update.   |

# License 

NeoPixelController is licensed under the MIT license:

The MIT License (MIT)

Copyright (c) 2016 Austin Berke

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.