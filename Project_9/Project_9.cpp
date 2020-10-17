#include<iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Rus");

	int a;
	cout << "Введите число: " << endl;
	cin >> a;

	if (a > 5)
	{
		cout << "Ваше число больше 5-ти" << endl;

	}

	else if(a==5)
	{
		cout << "Ваше число равно 5-ти" << endl;
	}

	else 
	{
		cout<< "Ваше число меньше 5-ти" << endl;
	}
}