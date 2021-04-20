#include<iostream>
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
using namespace std;
int main()
{
	char* RName = new char[10]{'M', 'U', 'S', 'A', '\0'};
	char* Radd = new char[10]{'H', '#', '2', ',', 's', '#', '4', '\0'};
	char* RCit = new char[14]{'L', 'a', 'h', 'o', 'r', 'e', '\0'};
	char* RNum = new char[10]{ '1', '2', '3', '4', '5', '6', '7', '8', '\0' };
	char* SName = new char[10]{ 'T', 'A', 'H', 'A', '\0' };
	char* Sadd = new char[10]{ 'H', '#', '5', ',', 's', '#', '9', '\0' };
	char* SCit = new char[14]{ 'L', 'a', 'h', 'o', 'r', 'e', '\0' };
	char* SNum = new char[10]{ '0', '2', '4', '4', '9', '6', '7', '8', '\0' };

	TwoDayPackage obj(RName, Radd, RCit, RNum, SName, Sadd, SCit, SNum, 43, 45, 34);
	cout <<"Cost of Two Day Package: "<< obj.calculateCost() << endl;
	cout << "---------------------------------------" << endl;
	OvernightPackage obj1(RName, Radd, RCit, RNum, SName, Sadd, SCit, SNum, 143, 145, 134);
	cout << "Cost of Overnight Package: " << obj1.calculateCost() << endl;
	cout << "---------------------------------------" << endl;
	return 0;
}