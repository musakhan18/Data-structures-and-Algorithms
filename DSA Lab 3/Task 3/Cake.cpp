#include "Cake.h"

int Getsize(char* arr)
{
	int s = 0;
	while (arr[s] != '\0')
	{
		s++;
	}
	s++;
	return s;
}

Cake::Cake(char* T, int S, int C, bool F)
{
	int s = Getsize(T);
	type = new char[s];
	for (int i = 0; i < s; i++)
	{
		type[i] = T[i];
	}
	type[s - 1] = '\0';

	size = S;
	chocolate = C;
	flower = F;
}

Cake::Cake(Cake& obj)
{
	int s = Getsize(obj.type);
	type = new char[s];
	for (int i = 0; i < s; i++)
	{
		type[i] = obj.type[i];
	}
	type[s - 1] = '\0';

	size = obj.size;
	chocolate = obj.chocolate;
	flower = obj.flower;
}

void Cake::SetType(char* T)
{
	int s = Getsize(T);
	type = new char[s];
	for (int i = 0; i < s; i++)
	{
		type[i] = T[i];
	}
	type[s - 1] = '\0';
}

void Cake::SetSize(int S)
{
	size = S;
}
void Cake::SetChocolate(int c)
{
	chocolate = c;
}

void Cake::SetFlower(bool f)
{
	flower = f;
}

char* Cake::GetType()const
{
	int s = Getsize(type);
	char*t = new char[s];
	for (int i = 0; i < s; i++)
	{
		t[i] = type[i];
	}
	t[s - 1] = '\0';
	return t;
}

int Cake::GetSize()const
{
	return size;
}

int Cake::GetChocolate()const
{
	return chocolate;
}

bool Cake::GetFlower()const
{
	return flower;
}

double Cake::Price()
{
	double price = 0;
	if (size==1)
	{ 
		price = 15 + (0.5 * chocolate);
		if (flower)
		{
			price += 7;
		}
	}

	if (size==2)
	{
		price = 25 + (1.0 * chocolate);
		if (flower)
		{
			price += 13;
		}
	}

	if (size == 3)
	{
		price = 35 + (1.5 * chocolate);
		if (flower)
		{
			price += 19;
		}
	}
	return price;
}

void Cake::description()
{
	if (flower)
	{
		cout << "This cake is " << size << " tier, " << type << " cake with flower decor and has " << chocolate << " pieces of chocolates" << endl;
	}
	else
	{
		cout << "This cake is " << size << " tier, " << type << " cake without flower decor and has " << chocolate << " pieces of chocolates" << endl;
	}
}

Cake::~Cake()
{
	delete type;
	type = nullptr;
}