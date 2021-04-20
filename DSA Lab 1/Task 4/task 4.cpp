#include<iostream>
#include"RectangleT4.h"
#include"Trapezoid.h"
#include "Quad.h"
using namespace std;

int main()
{
	Quad* quadptr[2];
	quadptr[0] = new RectangleT4(2, 3);
	quadptr[1] = new Trapezoid(5, 7, 3, 4, 6);
	for (int i = 0; i < 2; i++)
	{
		cout << quadptr[i]->Area() << endl;
		cout << quadptr[i]->Perimeter() << endl;
	}
	for (int i = 0; i < 2; i++)
	{
		delete quadptr[i];
	}
	return 0;
}