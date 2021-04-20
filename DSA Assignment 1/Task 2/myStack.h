#pragma once
#include<iostream>
#include"Stack.h"
using namespace std;

class myStack:public Stack
{
public:
	myStack(int = 0);
	myStack(const myStack&);
	bool IsEmpty();
	bool IsFull();
	char RemoveElement();
	void AddElement(char);
	char last();
	int size();
	char* Getarr()const;
	~myStack();
};

