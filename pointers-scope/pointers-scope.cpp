// pointers-scope.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "A.h"
#include "B.h"

B call() {
	A a1 = A(1);
	B b1 = B(a1); //pass COPY of a1 into B

	//b1 now owns a copy of a1 until b1 is out of scope
	return b1;
}

int main()
{

	B b2 = call(); //b2 gets a copy of b1. b1 and a1 are now destroyed. copy of a1 now exists in b2

	B *foo = &b2; //b2 is pointed to by foo. scope of this pointer is in main only, as is the object it points to. Both are created on the stack, therefore both will be automatically destroyed

	A* a2 = foo->getA(); //b2 stores an object of A. This method returns a pointer to that object

	int atest1 = a2->getValue(); //copy of value in object pointed to by a2, which is stored in b2

	a2->setValue(5);

	int atest2 = a2->getValue(); //atest1 will remains unchanged. however, this call will now yield 5

	return 0;
}
