#include "Trapezoid.h"

Trapezoid::Trapezoid(float L, float r, float u, float d ,float h ) :Quad(L, r, u, d)
{
	height = h;
}

void Trapezoid::SetHeight(float h)
{
	height = h;
}

float Trapezoid::GetHeight()const
{
	return height;
}

float Trapezoid::Area()
{
	float a;
	a = height;
	a *= GetUp() + GetDown();
	a /= 2;
	return a;
}

float Trapezoid::Perimeter()
{
	float p;
		p= GetUp() + GetDown() + GetLeft() + GetDown();
	return p;
}

Trapezoid::~Trapezoid(){}