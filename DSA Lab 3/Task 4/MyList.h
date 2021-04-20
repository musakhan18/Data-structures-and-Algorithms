#pragma once
#include"List.h"
#include<iostream>
using namespace std;

class MyList: public List
{
public:
	MyList(int s = 0);
	MyList(const MyList& obj);
	void AddElement(int);
	int RemoveElement();
	bool IsEmpty();
	bool IsFull();
	int size();
	int last();
	int* Getarr()const;
	MyList& operator=(const MyList& obj);
	const int& operator[](int)const;
	int& operator[](int);
	~MyList();
};

