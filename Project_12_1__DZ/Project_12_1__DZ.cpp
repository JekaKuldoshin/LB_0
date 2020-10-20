/*Написать калькулятор. Пользователь вводит значение двух переменных. Описать меню в консоли для математических операций сложения, вычитания,умножения,деления. 
Через оператор Switch реализовать математическую операцию соответствующую пункту меню.*/


#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	system("cls");

	cout << "Калькулятор(a+b)(a-b)(a*b)(a/b)" << endl << endl;

	int a, b, selection;

	cout << "Введите два числа: "<<endl;
	cin >> a >> b;

	cout << "Выберите математическую операцию:" << endl<<
	"1.Сложение" << endl<<
	"2.Вычитание" << endl<<
	"3.Умножение" << endl<<
	"4.Деление" << endl;
	cin >> selection;
	system("cls");

	switch (selection)
	{
	case 1:
		cout << "Результат: " << a + b << endl;
		break;

	case 2:
		cout << "Результат: " << a - b << endl;
		break;
	case 3:
		cout << "Результат: " << a * b << endl;
		break;
	case 4:
		cout << "Результат: " << (float) a / b << endl;
		break;

	default:
		cout << "Ошибка! Пункт меню отсутствует!" << endl;
	}
		

}