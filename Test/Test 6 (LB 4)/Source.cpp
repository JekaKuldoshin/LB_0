#include "Fun.h"

void Ent(int* array, int size) {

	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 100 - 50;
	}
}

void swp(int* array, int* Arr, int* Narr, int size) {
	int* min, * b;
	min = array;
	b = array;
	int j = 0;

	for (int i = 0; i < size; i++, array++) {
		if (*array < *min) {
			min = array;
		}
		if (*array % 2 != 0) {
			b = array;
		}
	}
	swap(*min, *b);

	for (int i = 1; i < size; ) {
		if (*(Arr + i) < 0) {
			*(Narr + j) = *(Arr + i);
			j++;
		}
		i += 2;
	}
}