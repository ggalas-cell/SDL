#pragma once
#include "Geometry.h"
class Rectangle: public Geometry
{
public:	
	Rectangle(int w, int h) : Geometry(w,h) { }
	void Draw(SDL_Renderer* renderer) override;
};

