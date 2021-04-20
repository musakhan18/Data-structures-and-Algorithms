#include "Package.h"

int GetSize(char* Arr)
{
	int s=0;
	while (Arr[s] != '\0')
	{
		s++;
	}
	s++;
	return s;
}

Package::Package(char* Rnam, char* RAdd, char* RCit, char* RNum, char* Snam, char* SAdd, char* SCit, char* SNum, float Cos, float Wei)
{
	int s = GetSize(Rnam);
	Rname = new char[s];
	for (int i = 0; i < s; i++)
	{
		Rname[i] = Rnam[i];
	}
	Rname[s - 1] = '\0';

	s = GetSize(RNum);
	Rnum = new char[s];
	for (int i = 0; i < s; i++)
	{
		Rnum[i] = RNum[i];
	}
	Rnum[s - 1] = '\0';

	s = GetSize(RAdd);
	Raddress = new char[s];
	for (int i = 0; i < s; i++)
	{
		Raddress[i] = RAdd[i];
	}
	Raddress[s - 1] = '\0';

	s = GetSize(RCit);
	Rcity = new char[s];
	for (int i = 0; i < s; i++)
	{
		Rcity[i] = RCit[i];
	}
	Rcity[s - 1] = '\0';


	s = GetSize(Snam);
	Sname = new char[s];
	for (int i = 0; i < s; i++)
	{
		Sname[i] = Snam[i];
	}
	Sname[s - 1] = '\0';

	s = GetSize(SNum);
	Snum = new char[s];
	for (int i = 0; i < s; i++)
	{
		Snum[i] = SNum[i];
	}
	Snum[s - 1] = '\0';

	s = GetSize(SAdd);
	Saddress = new char[s];
	for (int i = 0; i < s; i++)
	{
		Saddress[i] = SAdd[i];
	}
	Saddress[s - 1] = '\0';

	s = GetSize(SCit);
	Scity = new char[s];
	for (int i = 0; i < s; i++)
	{
		Scity[i] = SCit[i];
	}
	Scity[s - 1] = '\0';

	Weight = Wei;
	cost = Cos;
}


Package::~Package()
{
	delete[] Sname;
	Sname=nullptr;
	delete[]Snum;
	Snum = nullptr;
	delete[] Saddress;
	Saddress = nullptr;
	delete[] Scity;
	Scity = nullptr;
	delete[] Rname;
	Rname = nullptr;
	delete[]Rnum;
	Rnum = nullptr;
	delete[] Raddress;
	Raddress = nullptr;
	delete[]Rcity;
	Rcity = nullptr;
	 Weight=0;
	 cost=0;
}
