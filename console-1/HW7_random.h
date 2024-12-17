#pragma once
#include <iostream>
using namespace std;

//rand/srand
//�������: ������� ������ �� 10 �����, �������� ����� �� 0 �� 20, ��, �����, ����� �� ������ �����������

void run()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL)); /* ���������� ������� ����� � ��������, ������� � 1 ������ 1970 ����(��� ���������� UNIX - �����).
						��� �������� ������������ ��� ���������� "seed", ����� ��������� ����� ������ ��� ���������� � ����� ������������������.*/
	int const SIZE = 12;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		int num;
		
		while (true)
		{
			num = rand() % 21; /* ���� % - ��� �������� ������� �� ������, � ������ ������ ����� ���������� ����� �� 0 �� 20.*/
			
			bool isDuplicate = false;
			for (int j = 0; j < i; j++)
			{ // i � ������� ������
				if (arr[j] == num)
				{
					isDuplicate = true;
					break;
				}
			}

			if (isDuplicate == false) { // ���� ����� ����������
				arr[i] = num;   // ��������� � ������
				break;

				}
			}
		}
	

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}



}