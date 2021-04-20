#pragma once
#include<iostream>
using namespace std;
#include"List.h"
class MyList:public List
{
public:
	MyList(int = 0);
	MyList(const MyList&);
	bool IsEmpty();
	bool IsFull();
	int RemoveElement();
	void AddElement(int);
	int last();
	int size();
	int* Getarr()const;
	~MyList();
};