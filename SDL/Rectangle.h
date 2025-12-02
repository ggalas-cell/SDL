#pragma once
#include "Geometry.h"
class Rectangle: public Geometry
{
private:
	int mr_width, mr_height;
public:	
	Rectangle(int x,int y,int w, int h) : Geometry(x,y,w,h) { }
	void Draw(SDL_Renderer* renderer, int x, int y, int width, int height);
};

