//Написать программу, которая находит сумму всех целых нечетных чисел в диапозоне, указаном пользователем

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int sum = 0;
	int rangeBegin, rangeEnd;

	cout << "Введите начало диапазона: ";
	cin >> rangeBegin;
	
	cout << "Введите конец диапазона: ";
	cin >> rangeEnd;

	do
	{
		if (rangeBegin % 2 != 0)
		{
			sum += rangeBegin;
		}
		    

		rangeBegin++;
	} while (rangeBegin < rangeEnd);


	cout << "Сумма всех нечетных чисел в указанном диапозоне = " <<sum<< endl;

}