#pragma once
#include <iostream>
#include <ctime>
using namespace std;

//rand/srand
//«адание: создать массив на 10 чисел, диапазон чисел от 0 до 20, Ќќ, ¬ј∆Ќќ, числа не должны повтор€тьс€

/*void run()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL)); /* ¬озвращает текущее врем€ в секундах, начина€ с 1 €нвар€ 1970 года(так называемое UNIX - врем€).
						Ёто значение используетс€ как уникальный "seed", чтобы случайные числа каждый раз начинались с новой последовательности.
	int const SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		int num;
		
		while (true)
		{
			num = rand() % 21; /* «нак % - это операци€ делени€ по модулю, в данном случае будут генеритьс€ числа от 0 до 20.
			
			bool isDuplicate = false;
			for (int j = 0; j < i; j++)
			{ // i Ч текущий индекс
				if (arr[j] == num)
				{
					isDuplicate = true;
					break;
				}
			}

			if (isDuplicate == false) { // ≈сли число уникальное
				arr[i] = num;   // ƒобавл€ем в массив
				break;

				}
			}
		}
	

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}



}*/


//ƒалее вариант решени€ от автора курса


void run()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL)); /* ¬озвращает текущее врем€ в секундах, начина€ с 1 €нвар€ 1970 года(так называемое UNIX - врем€).
						Ёто значение используетс€ как уникальный "seed", чтобы случайные числа каждый раз начинались с новой последовательности.*/
	int const SIZE = 10;
	int arr[SIZE];

	bool alreadyThere;

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newRandomValue = rand() % 20;

		for (int j = 0; j < i; j++)

		{
			if (arr[j] == newRandomValue)
			{
				alreadyThere = true;
				break;
			}
		}

		if (!alreadyThere)
		{
			arr[i] = newRandomValue;
			i++;
		}

		
	}


	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}



}