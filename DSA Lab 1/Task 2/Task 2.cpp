#include<iostream>
#include"ForFiler.h"
#include"ForNonFiler.h"
using namespace std;
int main()
{
	char* Name = new char[10]{'M', 'U', 'S', 'A', '\0'};
	char* add = new char[10]{'H', '#', '2', ',', 's', '#', '4', '\0'};
	char* Cit = new char[14]{'L', 'a', 'h', 'o', 'r', 'e', '\0'};
	char* Num = new char[10]{'M', 'U', 'S', 'A', '\0'};//{'1', '2', '3', '4', '5', '6', '7', '8 ', '\0'};

	ForFiler obj(Name, add, Cit, Num, 30000,1.5);
	cout << "Tax for filer: " << obj.calculateTax() << endl;

	ForNonFiler obj1(Name, add, Cit, Num, 300000,2.5,0.5);
	cout << "Tax for Non filer: " << obj1.calculateTax() << endl;
}