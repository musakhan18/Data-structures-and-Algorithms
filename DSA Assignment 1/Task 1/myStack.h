#pragma once
#include"Stack.h"
#include<iostream>
using namespace std;

class myStack :public Stack
{
public:
	myStack(int = 0);
	myStack(const myStack&);
	bool IsEmpty();
	bool IsFull();
	int RemoveElement();
	void AddElement(int);
	int last();
	int size();
	int* Getarr()const;
	~myStack();
};


