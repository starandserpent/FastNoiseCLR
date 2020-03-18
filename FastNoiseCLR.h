#pragma once
#include "FastNoise/FastNoise.h"

using namespace System;
public ref class FastNoiseCLR {
public:
	 FastNoiseCLR(int seed) : fastnoise(new FastNoise(seed)) {}

	 float GetPerlinFractal(FN_DECIMAL x, FN_DECIMAL y) {
		 return fastnoise->GetPerlinFractal(x, y);
	 }

private:
	FastNoise* fastnoise;
};