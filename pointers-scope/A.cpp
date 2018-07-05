#include "stdafx.h"
#include "A.h"

A::A() {}

A::~A() {}

A::A(int value)
{
	this->value = value;
}

int A::getValue()
{
	return this->value;
}

void A::setValue(int value)
{
	this->value = value;
}