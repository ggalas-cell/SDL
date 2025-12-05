#pragma once
#include "Geometry.h"
class Circle: public Geometry
{
#define DEFAULT_PRECISION 100
private:

	/*int radius, precision, centerX, centerY;*/		
public:
	Circle(int rad, int pre= DEFAULT_PRECISION) : Geometry(rad*2,rad*2){}
	void Draw(SDL_Renderer* renderer)override;
	int GetRadius() const { return m_width / 2; }
};

