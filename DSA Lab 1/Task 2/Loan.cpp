#include "Loan.h"

int GetSize(char* Arr)
{
	int s = 0;
	while (Arr[s] != '\0')
	{
		s++;
	}
	s++;
	return s;
}

Loan::Loan(char* nam, char* Add, char* Cit, char* Num, int sal,float t)
{
	int s = GetSize(nam);
	name = new char[s];
	for (int i = 0; i < s; i++)
	{
		name[i] = nam[i];
	}
	name[s - 1] = '\0';

	s = GetSize(Num);
	Num = new char[s];
	for (int i = 0; i < s; i++)
	{
		Num[i] = Num[i];
	}
	Num[s - 1] = '\0';

	s = GetSize(Add);
	address = new char[s];
	for (int i = 0; i < s; i++)
	{
		address[i] = Add[i];
	}
	address[s - 1] = '\0';

	s = GetSize(Cit);
	city = new char[s];
	for (int i = 0; i < s; i++)
	{
		city[i] = Cit[i];
	}
	city[s - 1] = '\0';

	Salary = sal;
	tax = t;
}


Loan::~Loan()
{
	delete[] name;
	name = nullptr;
	delete[]Num;
	Num = nullptr;
	delete[] address;
	address = nullptr;
	delete[] city;
	city = nullptr;
}
