//Написать программу, которая находит сумму всех целых нечетных чисел в диапозоне, указаном пользователем

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, result;

	cout << "Программа которая считает сумму нечетных числе в диапозоне а и b." << endl<<endl<<endl;

	cout << "Напишите диапозон чисел" << endl;
	cin >> a >> b;

	cout << "Пользователь ввел диапозон от "<<a<<" до "<<b << endl;

	



	do
	{
		if (a % 2 == 0)
		{
			result = a + 1;
		}

		else
		{
			result = a + 0;
		}

		cout << "Результат суммы нечетных чисел: " << result << endl;

		result++;
	} while (a < b);

}