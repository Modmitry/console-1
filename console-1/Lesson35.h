#pragma once
#include <iostream>
using namespace std;

//functions, arguement's transfer, part2

void FillArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

void run()
{
	const int SIZE = 10;
	int arr[SIZE];

	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);
}