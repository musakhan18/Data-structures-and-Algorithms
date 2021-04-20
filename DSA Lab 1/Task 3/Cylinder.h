#pragma once
#include "Shape.h"
class Cylinder:public Shape
{
	float height;
	float radius;
public:
	Cylinder(char* = nullptr, float = 0, float = 0);
	double area();
	char* ToString();
	~Cylinder();
};

