#include "Line.h"

Line::Line(float s)
{
	side = s;
}

void Line::SetSide(float s)
{
	side = s;
}

float Line::GetSide()const
{
	return side;
}

Line::~Line(){}