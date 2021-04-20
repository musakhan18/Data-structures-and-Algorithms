#include "ForNonFiler.h"
#include<iostream>
using namespace std;

ForNonFiler::ForNonFiler(char* nam, char* Add, char* Cit, char* Num, int s, float t,float p) :Loan(nam, Add, Cit, Num, s, t)
{
	penalty = p;
}

double ForNonFiler::calculateTax()
{
	tax /= 100;
	tax *= Salary;
	double L = Salary*tax;
	penalty /= 100;
	penalty *= Salary;
	L += penalty;
	return L;

}

ForNonFiler::~ForNonFiler()
{
}
