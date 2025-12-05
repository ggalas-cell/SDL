#include "Rectangle.h"
#include "Geometry.h"
#include <SDL.h>
void Rectangle::Draw(SDL_Renderer* renderer)
{
	//SDL_RenderDrawLine(renderer, m_Posx, m_Posy, m_Posx +m_width, m_Posy);
	//SDL_RenderDrawLine(renderer, m_Posx + m_width, m_Posy, m_Posx + m_width, m_height + m_Posy);
	//SDL_RenderDrawLine(renderer, m_Posx, m_Posy, m_Posx, m_height + m_Posy);
	//SDL_RenderDrawLine(renderer, m_Posx, m_Posy + m_height, m_Posx + m_width, m_Posy + m_height);
	SDL_Rect rect = {m_Posx,m_Posy,m_width,m_height};
	SDL_RenderDrawRect(renderer, &rect);
}
