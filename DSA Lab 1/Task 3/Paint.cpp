#include "Paint.h"

Paint::Paint(Shape* s, float  c)
{
	cout << "Paint Constructor" << endl;
	cover = c;
	_shape = s;
}

float Paint::CalculateAmount(Shape* s)
{
	_shape = s;
	float C;
	C= _shape->area();
	C /= cover;
	return C;
}

Paint::~Paint()
{
	cout << "Paint Destructor" << endl;
}