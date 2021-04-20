#pragma once
#include"Loan.h"
class ForFiler:public Loan
{
public:
	ForFiler(char* = nullptr, char* = nullptr, char* = nullptr, char* = nullptr, int = 0, float = 1.5);
	double calculateTax();
	~ForFiler();
};

