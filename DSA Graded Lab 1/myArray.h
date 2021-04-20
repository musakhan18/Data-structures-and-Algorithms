#pragma once
#include<iostream>
using namespace std;
class myArray
{
private:
	int* arr;
	int MaxSize;
	int CurrentSize;
public:
	myArray(int=0);
	myArray(const myArray&);
	bool insert(int);
	bool delete_right();
	bool delete_left();
	void display();
	bool search(int, int&);
	~myArray();
};

