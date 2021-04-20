#include<iostream>
#include"Shape.h"
#include"Cylinder.h"
#include"Rectangle.h"
#include"Paint.h"
#include"Sphere.h"
using namespace std;
int main()
{
	char* Shape1 = new char[10]{ 'C','y','l','i','n','d','e','r','\0' };
	char* Shape2 = new char[10]{ 'R','e','c','t','a','n','g','l','e','\0' };
	char* Shape3 = new char[10]{ 'S','p','h','e','r','e','\0' };
	Shape* s;
	Cylinder c_obj(Shape1, 10, 30);
	Rectangle r_obj(Shape2, 20, 35);
	sphere s_obj(Shape3, 15);

	s = &c_obj;
	Paint obj(s, 12);
	cout << endl;
	cout << "Total amount of paint needed in shape " << s->ToString() << ": "<< obj.CalculateAmount(s) <<endl;
	
	s = &r_obj;
	cout << "Total amount of paint needed in shape " << s->ToString() << ": " << obj.CalculateAmount(s) <<endl;

	s = &s_obj;
	cout << "Total amount of paint needed in shape " << s->ToString() << ": "<<obj.CalculateAmount(s)<<endl;
	cout << endl;
	delete[]Shape1;
	Shape1 = nullptr;
	delete[]Shape2;
	Shape1 = nullptr;
	delete[]Shape3;
	Shape1 = nullptr;
}