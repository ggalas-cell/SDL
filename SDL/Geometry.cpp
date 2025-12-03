#include "Geometry.h"

void Geometry::SetPosition(int x, int y, int anchorX, int anchorY)
{
	m_Posx = x - anchorX * m_width;
	m_Posy = y - anchorY * m_height;	
}
Vector2 Geometry::GetPosition(float anchorX, float anchorY) { return Vector2(m_Posx+anchorX*m_width,m_Posy+anchorY*m_height); }
