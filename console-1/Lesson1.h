#pragma once
#include <iostream>
using namespace std;

void run()
{
	setlocale(LC_ALL, "Rus");

	cout << "��� ������������ ������ ��������� ��� ������ ������������� � ���� ���������" << endl;
	int a; cout << "������� ���������� �������� ���������, ������� ������������� �� ������: " << endl;
	cin >> a;
	int b; cout << "������� ���������� �������� ���������, ������� ������������� �� ������: " << endl;
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
