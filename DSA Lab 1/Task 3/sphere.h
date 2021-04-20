#pragma once
#include"Shape.h"
class sphere:public Shape
{
	float Radius;
public:
	sphere(char* = nullptr, float = 0);
	double area();
	char* ToString();
	~sphere();
};

