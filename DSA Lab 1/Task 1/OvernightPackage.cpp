#include "OvernightPackage.h"


OvernightPackage::OvernightPackage(char* Rnam, char* RAdd, char* RCit, char* RNum, char* Snam, char* SAdd, char* SCit, char* SNum, float Cos, float Wei, float F) : Package(Rnam, RAdd, RCit, RNum, Snam, SAdd, SCit, SNum, Cos, Wei)
{
	fee = F;
}

double OvernightPackage::calculateCost()
{
	double c;
	c = cost*Weight;
	c += fee;
	return c;
}

OvernightPackage::~OvernightPackage()
{
	fee = 0;
}
