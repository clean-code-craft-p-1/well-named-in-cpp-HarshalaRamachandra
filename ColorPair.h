#pragma once
#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include "ColorCodes.h"

namespace TelCoColorCoder
{
    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };
}

#endif // COLOR_PAIR_H
