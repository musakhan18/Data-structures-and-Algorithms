#include "Shape.h"


Shape::Shape(char* nam)
{
	cout << "Shape Constructor" << endl;
	int s = 0;
	while (nam[s] != '\0')
	{
		s++;
	}
	s++;
	name = new char[s];
	for (int i = 0; i < s; i++)
	{
		name[i] = nam[i];
	}
	name[s - 1] = '\0';
}

Shape::~Shape()
{
	cout << "Shape Constructor" << endl;
	delete[] name;
	name = nullptr;
}
