#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	cin >> a;

	switch (a)

	{
	case 1:
	{
		cout << "Вы ввели 1" << endl;
	}
		break;

	case 2:
	{
		cout << "Вы ввели 2" << endl;
	}
		break;

	default:
		cout << "Я не знаю этого числа!" << endl;
		break;
	}
}