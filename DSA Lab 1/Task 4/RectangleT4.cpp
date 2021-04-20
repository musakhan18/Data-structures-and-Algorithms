#include "RectangleT4.h"

RectangleT4::RectangleT4(float L, float r, float u, float d) :Quad(L, r, u, d) {}

float RectangleT4::Area()
{
	float a;
	a = GetLeft() * GetRight();
	return a;
}

float RectangleT4::Perimeter()
{
	float p;
	p = GetLeft() + GetRight();
	p *= 2;
	return p;
}

RectangleT4::~RectangleT4() {}