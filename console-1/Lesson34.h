#pragma once
#include <iostream>
using namespace std;

//functions, arguement's transfer

int Foo(int a)
{
	return	++a;
}

void run()
{
	int value = 1;

	value = Foo(value) ;

	cout << value << endl;
}