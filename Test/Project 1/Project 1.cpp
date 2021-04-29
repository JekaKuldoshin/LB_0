#define  _CRT_SECURE_NO_WARNINGS

#include "windows.h"
#include <iostream>
#include <ctime>
#include < stdio.h > 


using namespace std;

struct Tabl {
	unsigned int sc;
	char name[10];
	unsigned int size;            /*диаметр*/
	unsigned int mhz;             /*частота*/
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	struct Tabl t {};

	int size_string = 50;

	int size = 0, i = 0, j = 0;
	char c;
	int line = 0;

	char** str = new char* [size];
	for (int u = 0; u < size; u++)
	{
		str[u] = new char[size_string];
	}



}