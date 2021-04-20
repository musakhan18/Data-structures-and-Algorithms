#include "sphere.h"

sphere::sphere(char* n, float r) :Shape(n)
{
	cout << "Sphere Constructor" << endl;
	Radius = r;
}

double sphere::area()
{
	double a;
	a = Radius * Radius;
	a *= 4 * 3.14;
	return a;
}

char* sphere::ToString()
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

sphere::~sphere()
{
	cout << "Sphere Destructor" << endl;
}