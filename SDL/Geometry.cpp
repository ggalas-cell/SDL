#include "Geometry.h"

void Geometry::SetPosition(int x, int y, int ax, int ay)
{
	m_x = x - static_cast<int>(ax * m_width);
	m_y = y - static_cast<int>(ax * m_width);
}
Vector2 Geometry::GetPosition(float anchorX, float anchorY) { return Vector2(m_x+anchorX*m_width,m_y+anchorY*m_height); }
