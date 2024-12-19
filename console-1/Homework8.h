#pragma once
#include <iostream>
#include <ctime>
using namespace std;

//rand/srand
//Задание: создать массив на 10 чисел, диапазон чисел от 0 до 20, числа не должны повторяться И найти в массиве самое маленькое значение и вывести его на экран

void run()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL)); /* Возвращает текущее время в секундах, начиная с 1 января 1970 года(так называемое UNIX - время).
						Это значение используется как уникальный "seed", чтобы случайные числа каждый раз начинались с новой последовательности.*/
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


	int min = arr[0]; // Пусть первый элемент минимальный

	for (int i = 1; i < SIZE; i++)	// Цикл со второго элемента
	{ 
		if (arr[i] < min) {          // Если текущий элемент меньше
			min = arr[i];            // Обновляем значение минимального
		}
	}

	cout << "Наименьшее число: " << min << endl; // Выводим результ


}
