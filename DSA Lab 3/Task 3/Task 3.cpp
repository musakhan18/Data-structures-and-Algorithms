#include<iostream>
#include"Cake.h"
using namespace std;
int main()
{
	char* type = new char[15]{ 's','p','o','n','g','e','\0' };
	Cake obj(type, 2, 8, 1);
	obj.description();
	cout << "Price: " << obj.Price() << "$" << endl;;
}