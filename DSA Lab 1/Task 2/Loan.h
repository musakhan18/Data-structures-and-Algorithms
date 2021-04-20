#pragma once
class Loan
{
public:
	char* name;
	char* city;
	char* address;
	char* Num;
	int Salary;
	float tax;
	Loan(char* = nullptr, char* = nullptr, char* = nullptr, char* = nullptr, int = 0, float = 1.5);
	virtual double calculateTax() = 0;
	~Loan();
};

