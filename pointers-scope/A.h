#pragma once

class A
{
private:
	int value;
public:
	A();
	~A();
	A(int value);
	int getValue();
	void setValue(int value);
};
