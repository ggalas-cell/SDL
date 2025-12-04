#include "Geometry.h"

void Geometry::SetPosition(int x, int y, float anchorX, float anchorY)
{
	m_Posx =x-m_width*anchorX;
	m_Posy = y-m_height*anchorY;	
}
Vector2 Geometry::GetPosition(float anchorX, float anchorY) { return Vector2(m_Posx+anchorX*m_width,m_Posy+anchorY*m_height); }
