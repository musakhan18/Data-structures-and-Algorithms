#pragma once
#include<iostream>
using namespace std;

class Cake
{
	char* type;
	int size;
	int chocolate;
	bool flower;
public:
	Cake(char* = nullptr, int = 0, int = 0, bool = 0);
	Cake(Cake&);
	void SetType(char*);
	void SetSize(int);
	void SetChocolate(int);
	void SetFlower(bool);
	char* GetType()const;
	int GetSize()const;
	int GetChocolate()const;
	bool GetFlower()const;
	double Price();
	void description();
	~Cake();
};

