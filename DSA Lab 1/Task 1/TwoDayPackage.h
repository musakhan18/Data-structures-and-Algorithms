#pragma once
#include "Package.h"
class TwoDayPackage:public Package
{
	float fee;
public:
	TwoDayPackage(char* Rnam = nullptr, char* RAdd = nullptr, char* RCit = nullptr, char* RNum = nullptr, char* Snam = nullptr, char* SAdd = nullptr, char* SCit = nullptr, char* SNum = nullptr, float Cos = 0, float Wei = 0,float F=0);
	double calculateCost();
	~TwoDayPackage();
};

