#pragma once
#include <iostream>
using namespace std;

//rand/srand
//Задание: создать массив на 10 чисел, диапазон чисел от 0 до 20, НО, ВАЖНО, числа не должны повторяться

void run()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL)); /* Возвращает текущее время в секундах, начиная с 1 января 1970 года(так называемое UNIX - время).
						Это значение используется как уникальный "seed", чтобы случайные числа каждый раз начинались с новой последовательности.*/
	int const SIZE = 12;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		int num;
		
		while (true)
		{
			num = rand() % 21; /* Знак % - это операция деления по модулю, в данном случае будут генериться числа от 0 до 20.*/
			
			bool isDuplicate = false;
			for (int j = 0; j < i; j++)
			{ // i — текущий индекс
				if (arr[j] == num)
				{
					isDuplicate = true;
					break;
				}
			}

			if (isDuplicate == false) { // Если число уникальное
				arr[i] = num;   // Добавляем в массив
				break;

				}
			}
		}
	

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}



}