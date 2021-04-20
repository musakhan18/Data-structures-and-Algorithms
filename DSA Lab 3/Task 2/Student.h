#pragma once
class Student
{
	char* regNo;
	double CGPA;
public:
	Student();
	Student(char* , double );
	void SetregNo(char*);
	void SetCGPA(double);
	char* GetregNo()const;
	double GetCGPA()const;
	~Student();
};

