#pragma once
#include <iostream>
using namespace std;

//Массивы
void run()
{
	setlocale(LC_ALL, "Rus");

	const int size = 5;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;

	}

}