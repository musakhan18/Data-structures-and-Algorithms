#include "Student.h"

int getsize(char* arr)
{
	int s = 0;
	while (arr[s] != '\0')
	{
		s++;
	}
	s++;
	return s;
}

Student::Student()
{
	regNo = nullptr;
	CGPA = 0;
}

Student::Student(char* reg, double cgpa)
{
	int s = getsize(reg);
	regNo = new char[s];
	for (int i = 0; i < s; i++)
	{
		regNo[i] = reg[i];
	}
	regNo[s - 1] = '\0';

	CGPA = cgpa;
}
void Student::SetregNo(char* reg)
{
	int s = getsize(reg);
	regNo = new char[s];
	for (int i = 0; i < s; i++)
	{
		regNo[i] = reg[i];
	}
	regNo[s - 1] = '\0';
}

void Student::SetCGPA(double c)
{
	CGPA = c;
}

char* Student::GetregNo()const
{
	int s = getsize(regNo);
	char*reg = new char[s];
	for (int i = 0; i < s; i++)
	{
		reg[i] = regNo[i];
	}
	reg[s - 1] = '\0';
	return reg;
}

double Student::GetCGPA()const
{
	return CGPA;
}

Student::~Student()
{
	delete[]regNo;
	regNo = nullptr;
}