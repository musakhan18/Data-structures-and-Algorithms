#pragma once
#include"Line.h"
class Quad
{
	Line up;
	Line down;
	Line left;
	Line right;
public:
	Quad(float = 0, float = 0, float = 0, float = 0 );
	void SetUp(float);
	void SetDown(float);
	void SetLeft(float);
	void SetRight(float);
	float GetUp()const;
	float GetDown()const;
	float GetLeft()const;
	float GetRight()const;
	virtual float Area() = 0;
	virtual float Perimeter() = 0;
	virtual ~Quad();
};

