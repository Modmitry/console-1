#include <iostream>
#pragma once
using namespace std;

void les24_emb()
{
	setlocale(LC_ALL, "Rus");

	cout << "��� ������������ ������ ��������� ��� ������ ������������� � ���� ���������" << endl;
	int a; cout << "������� ���������� �������� ���������, ������� ������������� �� ������: " << endl;
	cin >> a;
	int b; cout << "������� ���������� �������� ���������, ������� ������������� �� ������: " << endl;
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
