#include "ForFiler.h"


ForFiler::ForFiler(char* nam, char* Add, char* Cit, char* Num, int s, float t) :Loan(nam,Add,Cit,Num,s,t)
{
}

double ForFiler::calculateTax()
{
	tax = 1.5;
	tax /= 100;
	tax *= Salary;
	double t = Salary*tax;
	return t;
}

ForFiler::~ForFiler()
{
}
