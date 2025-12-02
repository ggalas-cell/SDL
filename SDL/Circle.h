#pragma once
#include "Geometry.h"
class Circle: public Geometry
{
public:
	void Draw(SDL_Renderer* renderer, int centerX, int centerY, int radius, int precision);
};

