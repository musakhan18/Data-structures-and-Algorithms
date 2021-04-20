#include "Quad.h"

Quad::Quad(float L, float R, float u, float d)
{
	up.SetSide(u);
	down.SetSide(d);
	right.SetSide(R);
	left.SetSide(L);
}

void Quad::SetDown(float d)
{
	down.SetSide(d);
}

void Quad::SetLeft(float l)
{
	left.SetSide(l);
}

void Quad::SetRight(float r)
{
	right.SetSide(r);
}

void Quad::SetUp(float u)
{
	up.SetSide(u);
}

float Quad::GetDown()const
{
	return down.GetSide();
}

float Quad::GetLeft()const
{
	return left.GetSide();
}

float Quad::GetRight()const
{
	return right.GetSide();
}

float Quad::GetUp()const
{
	return up.GetSide();
}

Quad::~Quad(){}