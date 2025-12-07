#pragma once
#include "Math.h"
struct SDL_Renderer;
class Geometry	
{
protected:
	int m_Posx, m_Posy,m_width,m_height;
public:
	Geometry(int w,int h) : m_width(w),m_height(h),m_Posx(0), m_Posy(0){}
	virtual ~ Geometry() {}
	virtual void Draw(SDL_Renderer* renderer) = 0;
	virtual void Resize(int width, int height);

	void SetPosition(const Vector2& value, float anchorX, float anchorY);
	void SetPosition(int x,int y, float anchorX,float anchorY);

	Vector2 GetPosition(float anchorX, float anchorY)const ;
};

	