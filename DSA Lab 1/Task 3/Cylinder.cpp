#include "Cylinder.h"

Cylinder::Cylinder(char* n, float h, float r):Shape(n)
{
	cout << "Cylinder Constructor" << endl;
	height = h;
	radius = r;
}

double Cylinder::area()
{
	double a;
	a = radius * radius;
	a *= height;
	a *= 3.14;
	return a;
}

char* Cylinder::ToString()
{
	int s = 0;
	while (name[s] != '\0')
	{
		s++;
	}
	s++;
	char* nam = new char[s];
	for (int i = 0; i < s; i++)
	{
		nam[i] = name[i];
	}
	nam[s - 1] = '\0';
	return nam;
}

Cylinder::~Cylinder() { cout << "Cylinder Destructor" << endl; }