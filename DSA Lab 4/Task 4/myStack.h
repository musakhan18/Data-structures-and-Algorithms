#pragma once
#include<iostream>
using namespace std;
class myStack
{
	char* arr;
	int max;
	int Csize;
public:
	myStack(int = 0);
	myStack(const myStack&);
	void AddElement(char);
	char RemoveElement();
	bool IsEmpty();
	bool IsFull();
	char size();
	bool palindrome();
	/*int last();
	int* Getarr()const;*/
	~myStack();
};

