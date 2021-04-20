#include<iostream>
#include"MyList.h"
using namespace std;

int Operation(char);
int Size(char*);
void display(char*);

int main()
{
	int x = 0, y = 0;
	char* infix=new char[100]; 
	char postfix[100];
	char reverse[100];
	char* prefix=new char[100];
	cout << "Enter Expression: ";cin >> infix;
	x = Size(infix);
	MyList obj(x);
	x++;
	char c;
	infix[x + 1] = '\0';
	infix[x--] = ')';
	while (x > 0)
	{
		infix[x] = infix[x - 1];
		x--;
	}
	infix[x] = '(';
	
	int size = 0;

	while (infix[size] != '\0')
	{
		size++;
	}
	int j = 0;
	for (int i = size; i >= 0; i--)
	{
		reverse[j] = infix[i - 1];
		j++;
	}
	j--;
	reverse[j] = '\0';
	
	for (int k = 0; k < j; k++)
	{
		if (reverse[k] == ')')
		{
			reverse[k] = '(';
		}
		else if (reverse[k] == '(')
		{
			reverse[k] = ')';
		}
	}
	
	for (int k = 0; k < j; k++)
	{
		infix[k] = reverse[k];
	}
	
	while (infix[x] != '\0')
	{
		if (infix[x] == '(')
		{
			obj.AddElement(infix[x]);
		}
		else if (infix[x] >= 'A' && infix[x] <= 'Z')
		{
			postfix[y] = infix[x];
			y++;
		}
		else if (infix[x] == '+' || infix[x] == '-' || infix[x] == '*' || infix[x] == '/')
		{
			while (obj.last() == '+' || obj.last() == '-' || obj.last() == '*' || obj.last() == '/')
			{
				if (Operation(obj.last()) >= Operation(infix[x]))
				{
					postfix[y] = obj.RemoveElement();
					y++;
				}
				else
				{
					break;
				}
			}
			obj.AddElement(infix[x]);
		}
		else if (infix[x] == ')')
		{
			c = obj.RemoveElement();
			while (c != '(')
			{
				postfix[y] = c;
				c = obj.RemoveElement();
				y++;
			}
		}
		x++;
	}
	postfix[y] = '\0';

	int len1 = 0;
	while (postfix[len1] != '\0')
	{
		len1++;
	}
	int rev = 0;
	for (int k = len1; k >= 0; k--)
	{
		prefix[rev] = postfix[k - 1];
		rev++;
	}
	prefix[rev - 1] = '\0';
	display(prefix);

	return 0;
}

int Operation(char c)
{
	if(c=='+')
	{
		return 1;
	}
	if (c == '/')
	{
		return 2;
	}
	if(c=='-')
	{
		return 1;
	}
	if(c== '*')
	{
		return 2;
	}
}

int Size(char* arr)
{
	int s = 0;
	while (arr[s] != '\0')
	{
		s++;
	}
	return s;
}

void display(char* prefix)
{
	cout << "Prefix Expression: " << prefix << endl;
}