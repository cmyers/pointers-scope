#pragma once
#include "B.h"
#include "A.h"

class B
{
private:
	A a;
public:
	B();
	~B();
	B(A a);
	A* getA();
};