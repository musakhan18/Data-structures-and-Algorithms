#pragma once
#include"Package.h"
class OvernightPackage:public Package
{
private:
	float fee;
public:
	OvernightPackage(char* Rnam = nullptr, char* RAdd = nullptr, char* RCit = nullptr, char* RNum = nullptr, char* Snam = nullptr, char* SAdd = nullptr, char* SCit = nullptr, char* SNum = nullptr, float Cos = 0, float Wei = 0, float F = 0);
	double calculateCost();
	~OvernightPackage();
};

