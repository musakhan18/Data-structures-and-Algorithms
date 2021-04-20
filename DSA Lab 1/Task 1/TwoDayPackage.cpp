#include "TwoDayPackage.h"


TwoDayPackage::TwoDayPackage(char* Rnam, char* RAdd, char* RCit, char* RNum, char* Snam, char* SAdd, char* SCit, char* SNum, float Cos, float Wei,float F) : Package(Rnam, RAdd, RCit,RNum,Snam,SAdd,SCit,SNum,Cos,Wei )
{
	fee = F;
}

double TwoDayPackage::calculateCost()
{
	double C = cost*Weight;
	C += fee;
	return C;
}

TwoDayPackage::~TwoDayPackage()
{
	fee = 0;
}
