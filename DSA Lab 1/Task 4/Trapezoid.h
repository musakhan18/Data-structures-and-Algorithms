#pragma once
#include"Quad.h"
class Trapezoid:public Quad
{
	float height;
public:
	Trapezoid(float = 0, float = 0, float = 0, float = 0, float = 0);
	void SetHeight(float h);
	float GetHeight()const;
	float Area();
	float Perimeter();
	~Trapezoid();
};

