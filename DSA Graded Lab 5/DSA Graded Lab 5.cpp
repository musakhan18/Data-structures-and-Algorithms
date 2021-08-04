#include <iostream>
using namespace std;

int Div(int num1, int num2)
{
	if (num2==0)
	{
		return num1;
	}
	if (num2 > 0)
	{
		return Div(num2, num1 % num2);
	}
}

int CalLcm(int num1, int num2)
{
	if (num2>num1)
	{
		CalLcm(num2, num1);
	}
	else
	{
		int num = Div(num1, num2);
		num = num1 / num;
		return num * num2;
	}
}

int main()
{
	int num1, num2;
	cout << "Enter two numbers" << endl;
	cout << "------------------" << endl;
	cout << "Num1: "; cin >> num1;
	cout << "Num2: "; cin >> num2;
	cout << endl;
	cout << "LCM: " << CalLcm(num1, num2) << endl;
	return 0;
}
