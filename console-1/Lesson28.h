#pragma once
#include <iostream>
using namespace std;

//Sizeof

void run()
{
	int arr[]{ 24, 134, 11, 8432 };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
}