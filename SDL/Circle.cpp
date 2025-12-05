#include "Circle.h"
#include <SDL.h>

void Circle::Draw(SDL_Renderer* renderer)
{
	Vector2 center = GetPosition(0.5f, 0.5f);
	float step = (float)(2 * M_PI) / DEFAULT_PRECISION;
	for (int i = 0; i <= DEFAULT_PRECISION; i++)
	{

		int radius = m_width / 2;
		int x1 = radius * (int)cos(step * i) + center.x;
		int y1 = radius * (int)sin(step * i) + center.y;
		int x2 = radius * (int)cos(step * i + 1) + center.x;
		int y2 = radius * (int)sin(step * i + 1) + center.y;
		SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
	}
}

