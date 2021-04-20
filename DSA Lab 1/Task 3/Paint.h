#pragma once
#include"Shape.h"
class Paint
{
	Shape* _shape;
	float cover;
public:
	Paint(Shape*  = nullptr, float  = 0);
	float CalculateAmount(Shape*);
	~Paint();
};

