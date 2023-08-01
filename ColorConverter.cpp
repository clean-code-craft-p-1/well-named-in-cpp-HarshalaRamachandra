#include "ColorConverter.h"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void printColorCodingRefManual()
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "COLOR-NAMES TO PAIR NUMBER REFERENCE MANUAL" << std::endl;
        std::cout << "------------------------------------------------------" << std::endl;

        int pairNo = 0;

        for (int majorCol = 0; majorCol < numberOfMajorColors; majorCol++) {
            for (int minorCol = 0; minorCol < numberOfMinorColors; minorCol++) {
                pairNo = GetPairNumberFromColor(static_cast<MajorColor>(majorCol), static_cast<MinorColor>(minorCol));

                std::cout << "Major Color : " << MajorColorNames[majorCol] << ", " << "Minor Color : "
                    << MinorColorNames[minorCol] << " = " << pairNo << std::endl;
                std::cout << "------------------------------------------------------" << std::endl;
            }
        }
    }

}
