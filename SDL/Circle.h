#pragma once
#include "Geometry.h"
class Circle: public Geometry
{
public:
	Circle(int cx,int cy,int rad, int pre ) : Geometry(cx,cy,rad,pre){}
	void Draw(SDL_Renderer* renderer, int centerX, int centerY, int radius, int precision);
};

