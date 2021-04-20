#pragma once
class Package
{
public:
	char * Sname;
	char* Snum;
	char* Saddress;
	char* Scity;
	char* Rname;
	char* Rnum;
	char* Raddress;
	char* Rcity;
	float Weight;
	float cost;

	Package(char* Rnam = nullptr, char* RAdd = nullptr, char* RCit = nullptr, char* RNum = nullptr, char* Snam = nullptr, char* SAdd = nullptr, char* SCit = nullptr, char* SNum = nullptr, float Cos=0, float Wei=0);
	virtual double calculateCost() = 0;
	virtual ~Package();
};

