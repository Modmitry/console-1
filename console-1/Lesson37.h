#pragma once
#include <iostream>
using namespace std;

//field of view, global & local variable

int a; //global varriable

void foo(int a) //local varriable
{
	a++;
}

void run()
{
	foo(2);
	a++;

	cout << a << endl;
}
