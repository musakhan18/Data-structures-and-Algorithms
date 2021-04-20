#include "Rectangle.h"

Rectangle::Rectangle(char* n, float l, float w) :Shape(n)
{
	cout << "Rectangle Constructor" << endl;
	Lenght = l;
	Width = w;
}

double Rectangle::area()
{
	double a;
	a = Lenght * Width;
	return a;
}

char* Rectangle::ToString()
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

Rectangle::~Rectangle(){ cout << "Rectangle Destructor" << endl; }