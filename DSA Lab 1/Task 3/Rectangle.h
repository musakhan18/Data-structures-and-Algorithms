#pragma once
#include"Shape.h"
class Rectangle:public Shape
{
	float Lenght;
	float Width;
public:
	Rectangle(char* = nullptr, float = 0, float = 0);
	double area();
	char* ToString();
	~Rectangle();
};






