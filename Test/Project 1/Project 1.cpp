/*
Приклад 2:
Написати функцію, яка виводить всі числа від 1 до N
*/

#include <iostream>

using namespace std;

void fun(int N)
{
	if (N != 1)fun(N - 1);
	
}

int main()
{
	setlocale(LC_ALL, "rus");

	while (true)
	{
		int N;
		cout << "Введите N:" << endl;
		cin >> N;

		fun(N);

		cout << endl;

		system("pause");
		system("cls");
	}
	return 0;




}