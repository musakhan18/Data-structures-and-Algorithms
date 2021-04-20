#pragma once
#include"Quad.h"
class RectangleT4:public Quad
{
public:
	RectangleT4(float = 0, float = 0, float = 0, float = 0);
	float Perimeter();
	float Area();
	~RectangleT4();
};

