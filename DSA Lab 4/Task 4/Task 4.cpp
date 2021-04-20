#include<iostream>
#include<string>
#include "myStack.h"
using namespace std;
int main()
{
	char* ptr = new char[50];
	cout << "Enter line: "; cin.getline(ptr, 50);
	int size = 0;
	while (ptr[size] != '\0')
	{
		size++;
	}

	myStack obj(size);

	for (int i = 0; i < size; i++)
	{
		if (ptr[i] != ' ')
		{
			obj.AddElement(ptr[i]);
		}
	}
	if (obj.palindrome())
	{
		cout << "This line is palindrom" << endl;
	}
	else
	{
		cout << "This line is not palindrom" << endl;
	}
}