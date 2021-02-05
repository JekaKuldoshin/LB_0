
/*
Приклад 3:
Написати функцію, яка друкує N одиниць потім N нулів
*/

#include <iostream>

using namespace std;

void fun(int N)
{
	cout << 1;
	
	if (N > 1)
	{
		fun(N - 1);
	}

	cout << 0;
}

int main()
{
	setlocale(LC_ALL, "rus");
	 
	int N;
	while (true)
	{
		cout << "Введите количество N: ";
		cin >> N;

		fun(N);

		cout << endl;

		system("pause");
		system("cls");
	}
	return 0;

}