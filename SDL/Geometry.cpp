#include "Geometry.h"

void Geometry::SetPosition(const Vector2& value, float anchorX, float anchorY)
{
	SetPosition(value.x, value.y, anchorX, anchorY);
}

void Geometry::SetPosition(int x, int y, float anchorX, float anchorY)
{
	m_Posx =x-m_width*anchorX;
	m_Posy = y-m_height*anchorY;	
}
void Geometry::Resize(int width, int height)
{
	m_width = width;
	m_height = height;
}
Vector2 Geometry::GetPosition(float anchorX, float anchorY) const { return Vector2(m_Posx+anchorX*m_width,m_Posy+anchorY*m_height); }
