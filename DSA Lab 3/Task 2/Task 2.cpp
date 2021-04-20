#include<iostream>
#include"Student.h"
using namespace std;
int LinearSearch(Student S[10],double);
int BinarySearch(Student S[10], double);
int main()
{
	
	Student S[10];
	char* num = new char[15];
	int c = 0;
	double cgpa;
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << "Enter Reg No. of student " << i + 1 << ": "; cin >> num;
		S[i].SetregNo(num);
		cout << "Enter CGPA of student " << i + 1 << ": "; cin >> cgpa;
		S[i].SetCGPA(cgpa);
	}
	cout << "\n Enter CGPA to search: "; cin >> cgpa;
	cout << "\n By Linear Search" << endl;
	cout << "--------------------" << endl;
	int ind = LinearSearch(S, cgpa);
	if (ind!=-1)
	{
		cout << "Record found at index: " << ind << endl;
		cout << "Reg No.: " << S[ind].GetregNo() << endl;
		cout << "CGPA: " << S[ind].GetCGPA() << endl;
	}
	else
	{
		cout << "Record found at index: " << c << endl;
	}
	cout << "\n By Binary Search" << endl;
	cout << "--------------------" << endl;
	ind = BinarySearch(S, cgpa);
	if (ind != -1)
	{
		cout << "Record found at index: " << ind << endl;
		cout << "Reg No.: " << S[ind].GetregNo() << endl;
		cout << "CGPA: " << S[ind].GetCGPA() << endl;
	}
	else
	{
		cout << "Record found at index: " << c << endl;
	}
}

int LinearSearch(Student S[10],double num)
{
	bool flag=0;
	int ind;
	for (int i = 0; i < 10; i++)
	{
		if (S[i].GetCGPA()==num)
		{
			flag = 1;
			ind = i;
			break;
		}
	}
	if (flag)
	{
		return ind;
	}
	else
	{
		return -1;
	}
}

int BinarySearch(Student S[10], double num)
{
	//cout << "1" << endl;
	Student temp;
	for (int i = 0; i < 10; i++)
	{
		//int Value = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (S[i].GetCGPA() > S[j].GetCGPA())
			{
				temp = S[i];
				S[i] = S[j];
				S[j] = temp;
			}
		}
	}
	//cout << "2" << endl;
	int L = 0, H = 9;
	int mid = 0,ind;
	bool flag = 0;
	while (L<=H)
	{
		mid = (L + H) / 2;
		if (S[mid].GetCGPA()==num)
		{
			ind= mid;
			flag = 1;
			break;
		}
		else if (S[mid].GetCGPA()<num)
		{
			L = mid + 1;
		}
		else
		{
			H = mid - 1;
		}
	}
	//cout << "3" << endl;
	if (flag)
	{
		return ind;
	}
	else
	{
		return -1;
	}
}