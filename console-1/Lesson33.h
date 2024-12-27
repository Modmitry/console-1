#pragma once
#include <iostream>
using namespace std;

int Sum(int a, int b)
{
	return a + b;
}


void run()
{
	setlocale(LC_ALL, "Rus");
	int q = 11;
	int w = 10;

	cout << Sum(q, w) << endl;

}



