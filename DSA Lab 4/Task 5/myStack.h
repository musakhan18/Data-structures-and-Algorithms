#pragma once
#include<iostream>
using namespace std;
class myStack
{
	int* arr;
	int max;
	int Csize;
public:
	myStack(int = 0);
	myStack(const myStack&);
	void AddElement(int);
	int RemoveElement();
	bool IsEmpty();
	bool IsFull();
	int size();
	void sort();
	void display();
	/*int last();
	int* Getarr()const;*/
	~myStack();
};



