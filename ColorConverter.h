#pragma once
#ifndef COLOR_CONVERTER_H
#define COLOR_CONVERTER_H

#include "ColorCodes.h"
#include "ColorPair.h"
#include <iostream>

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void printColorCodingRefManual();
}

#endif // COLOR_CONVERTER_H

