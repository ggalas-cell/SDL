#include "Rectangle.h"
void Rectangle::Draw(SDL_Renderer* renderer,int x, int y, int width, int height)
{
	SDL_RenderDrawLine(renderer, x, y, x + width, y);
	SDL_RenderDrawLine(renderer, x + width, y, x + width, height + y);
	SDL_RenderDrawLine(renderer, x, y, x, height + y);
	SDL_RenderDrawLine(renderer, x, y + height, x + width, y + height);
}
