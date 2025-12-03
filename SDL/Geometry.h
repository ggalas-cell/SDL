#pragma once
#include <SDL.h>
#include "Math.h"
class Geometry	
{
protected:
	int m_Posx, m_Posy,m_width,m_height;
public:

	Geometry(int w,int h) : m_width(w),m_height(h){ }
	virtual ~ Geometry() {}
	virtual void Draw(SDL_Renderer* renderer) = 0;
	void SetPosition(int x,int y, int anchorX,int anchorY);
	Vector2 GetPosition(float anchorX, float anchorY);
};

