#pragma once
#include <SDL.h>
class Geometry
{
private:
	int m_x, m_y,m_width,m_heigth;
public:

	Geometry(int x1,int y1,int w,int h)
		:m_x(x1), m_y(y1), m_width(w),m_heigth(h){ }
	virtual void Draw(SDL_Renderer* renderer) = 0;
	 




};

