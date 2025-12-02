#pragma once
#include "Geometry.h"
class Rectangle: public Geometry
{
public:
	virtual void DrawRectangle(SDL_Renderer* renderer, int x, int y, int width, int heigth)
	{
		SDL_RenderDrawLine(renderer, x, y, x + width, y);
		SDL_RenderDrawLine(renderer, x + width, y, x + width, heigth + y);
		SDL_RenderDrawLine(renderer, x, y, x, heigth + y);
		SDL_RenderDrawLine(renderer, x, y + heigth, x + width, y + heigth);
	}
};

