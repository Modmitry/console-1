#pragma once
#include <iostream>
using namespace std;

//functions, prototypes

void foo(int a, int b);

void foo(int a, int b)
{
	cout << "I'm a function, I have been called" << endl;
	
}

void run()
{
	foo(3, 7);
}


