#include<iostream>
#include"myStack.h"
using namespace std;

int GetSize(char*);

int main()
{
	char* exp = new char[30];
	char* post = new char[30];
	cout << "Enter expression: "; cin >> exp;
	int size = GetSize(exp);
	myStack obj(size);
	exp[size] = '\0';
	
		char* temp = new char[size];
		for (int i = 0; i < size; i++)
		{
			temp[i] = exp[i];
		}
		exp[0] = '(';
		for (int i = 0; i < size; i++)
		{
			exp[i + 1] = temp[i];
		}
		exp[size + 1] = ')';
		exp[size + 2] = '\0';
		size += 3;
	
	int s = 0;

	for (int i = 0,j=0; i < size; i++)
	{
		if (exp[i] == '(' || exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
		{
			obj.AddElement(exp[i]);
		}
		else if (exp[i] >= 'a' && exp[i] <= 'z' || exp[i] >= 'A' && exp[i] <= 'Z' || exp[i] >= '0' && exp[i] <= '9')
		{
			post[j] = exp[i];
			j++;
			s++;
		}
		else if (exp[i]==')')
		{
			char t = obj.RemoveElement();
			while (t != '(')
			{
				post[j] = t;
				t = obj.RemoveElement();
				j++;
				s++;
			}
		}
	}
	post[s ++] = '\0';
	for (int i = 0; i < s; i++)
	{
		cout << post[i];
	}
	cout << endl;
}

int GetSize(char* arr)
{
	int s = 0;
	while (arr[s]!='\0')
	{
		s++;
	}
	return s;
}