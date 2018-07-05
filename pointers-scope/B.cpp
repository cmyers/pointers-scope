#include "stdafx.h"
#include "B.h"

B::B() {}

B::~B() {}

B::B(A a)
{
	this->a = a;
}

A* B::getA()
{
	return &this->a;
}