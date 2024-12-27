#pragma once
#include <iostream>
#include <ctime>
using namespace std;

//rand/srand
//Задание: создать массив на 10 чисел, диапазон чисел от 0 до 20, НО, ВАЖНО, числа не должны повторяться

/*void run()
{
	srand(time(NULL)); /* Returns the current time in seconds, starting from January 1, 1970 (the so-called UNIX time).
						This value is used as a unique "seed" so that the random numbers start from a new sequence each time.
	int const SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		int num;
		
		while (true)
		{
			num = rand() % 21; /* The % sign is a modulo division operation, in this case, numbers from 0 to 20 will be generated.
			
			bool isDuplicate = false;
			for (int j = 0; j < i; j++)
			{ // i — current index
				if (arr[j] == num)
				{
					isDuplicate = true;
					break;
				}
			}

			if (isDuplicate == false) { // If number is uniqe
				arr[i] = num;   // Added to array
				break;

				}
			}
		}
	

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}*/


//Next is a solution from the author of the course


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

}