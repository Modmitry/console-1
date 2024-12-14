#include <iostream>
#pragma once
using namespace std;

void les24_emb()
{
	setlocale(LC_ALL, "Rus");

	cout << "Вам предлагается задать параметры для вывода прямоугльника в виде звездочек" << endl;
	int a; cout << "Введите количество символов звездочка, которые располагаются по высоте: " << endl;
	cin >> a;
	int b; cout << "Введите количество символов звездочка, которые располагаются по ширине: " << endl;
	cin >> b;


	for (int w = 1; w <= a; w++)
	{

		for (int i = 1; i <= b; i++)
		{
			cout << "*";
			if (i == b)
			{
				cout << "\n";
				break;
			}
		}
	}
}
