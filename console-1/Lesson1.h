#pragma once
#include <iostream>
using namespace std;

void run()
{
	setlocale(LC_ALL, "Rus");

	cout << "Вам предлагается задать параметры для вывода прямоугльника в виде звездочек" << endl;
	int a; cout << "Введите количество символов звездочка, которые располагаются по высоте: " << endl;
	cin >> a;
	int b; cout << "Введите количество символов звездочка, которые располагаются по ширине: " << endl;
	cin >> b;


	for (int i = 1; i <= a; i++)
	{

		for (int j = 1; j <= b; j++)
		{
			cout << "*";	
		}
		cout << endl;
	}
}
