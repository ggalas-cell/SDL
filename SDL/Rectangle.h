#pragma once
#include "Geometry.h"
class Rectangle: public Geometry
{
public:	
	Rectangle(int x,int y,int w, int h) : Geometry(x,y,w,h) { }
	void Draw(SDL_Renderer* renderer, int x, int y, int width, int height);
};

