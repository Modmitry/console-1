#pragma once
#include <iostream>
#include <ctime>
using namespace std;

//rand/srand
//«адание: создать массив на 10 чисел, диапазон чисел от 0 до 20, числа не должны повтор€тьс€ » найти в массиве самое маленькое значение и вывести его на экран

void run()
{
	

	srand(time(NULL)); /* Returns the current time in seconds, starting from January 1, 1970 (the so-called UNIX time).
						This value is used as a unique "seed" so that the random numbers start from a new sequence each time.*/
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


	int min = arr[0]; // Let's start with the smallest element.


	for (int i = 1; i < SIZE; i++)	// Cycle from the second element

	{ 
		if (arr[i] < min) {          // If the current element is smaller
			min = arr[i];            // Updating the minimum value
		}
	}

	cout << "The smallest number: " << min << endl; // Output the result


}
