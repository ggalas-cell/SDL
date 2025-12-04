#include "Circle.h"

void Circle::Draw(SDL_Renderer* renderer)
{
	float step = (2 * M_PI) / m_height;
	for (int i = 0; i <= m_height; i++)
	{
		int x1 = m_width * cos(step * i) + m_Posx;
		int y1 = m_width * sin(step * i) + m_Posy;
		int x2 = m_width * cos(step * i + 1) + m_Posx;
		int y2 = m_width * sin(step * i + 1) + m_Posy;
		SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
	}
}
