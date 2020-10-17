#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int var;
	cout << "Введите число для проверки на четность: ";
	cin >> var;

	if(var%2, var==0)
	{
		cout << "Число " <<var << " четное!"<<endl;
	}

	else
	{
		cout << "Число " << var << " не четное!" << endl;
	}

}