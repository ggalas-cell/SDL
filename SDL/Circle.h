#pragma once
#include "Geometry.h"
class Circle: public Geometry
{
public:
	Circle(int rad, int pre ) : Geometry(rad,pre){}
	void Draw(SDL_Renderer* renderer)override;
};

