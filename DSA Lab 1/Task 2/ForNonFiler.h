#pragma once
#include"Loan.h"
class ForNonFiler:public Loan
{
	float  penalty;
public:
	ForNonFiler(char* = nullptr, char* = nullptr, char* = nullptr, char* = nullptr, int = 0, float = 2.5,float=0.5);
	double calculateTax();
	~ForNonFiler();
};

