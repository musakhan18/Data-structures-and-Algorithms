#pragma once
#include<iostream>
using namespace std;

class Shape
{
public:
	char* name;
	Shape(char* =nullptr);
	virtual double area() = 0;
	virtual char* ToString()=0;
	virtual ~Shape();
};

