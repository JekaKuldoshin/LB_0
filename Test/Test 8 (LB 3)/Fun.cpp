#include "Fun.h"



void byChance(int* array)
{
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 20;
	}
}


int Sum(int* arr)
{
	system("cls");
	int result = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 9)
		{
			result = arr[i] + result;
		}
	}
	return result;
}

int PrintArr(int* arr, int& count, int* NEWarr)
{

	for (int i = 0; i < size; i++) {
		if (*(arr + i) > 9) 
		{
			*(NEWarr + count) = *(arr + i);
			count++;
		}
		
	}
}