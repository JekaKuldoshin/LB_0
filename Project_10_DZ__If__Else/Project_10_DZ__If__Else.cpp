//Напишите программу, проверяющую число, введенное с клавиатуры на четность

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	cout << "Программа которая проверяет на четность." << endl << endl;

	int a;
	cout << "Введите число:";
	cin >> a; 
	cout<<endl;

	if (a%2==0)
	{
		cout<<"Ваше число четное" << endl;
	}

	else
	{
		cout << "Ваше число не четное" << endl;
	}





}