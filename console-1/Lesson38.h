#pragma once
#include <iostream>
using namespace std;

//default arguments (options)

void foo(int q, int a = 5, double b = 0.5)
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
		cout << q << endl;
}

void run()
{
	foo(3); //тут мы передали значение для q, спросить у Димы, как прога поняла, что именно q надо присвоить
	//это значение? потому что только у q оно не опрелено в функции foo?
}
