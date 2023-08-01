#ifndef TELCO_COLOR_CODER_H
#define TELCO_COLOR_CODER_H

#include <string>

namespace TelCoColorCoder
{
	enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
	enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

	// ... rest of the declarations from the namespace ...
	const char* MajorColorNames[] = {
		"White", "Red", "Black", "Yellow", "Violet"
	};
	int numberOfMajorColors =
		sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
	const char* MinorColorNames[] = {
		"Blue", "Orange", "Green", "Brown", "Slate"
	};
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

#endif // TELCO_COLOR_CODER_H
#pragma once
