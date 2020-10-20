//Разработать программу, которая выводит на экран линию из символов. Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.


#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	system("cls");

	long int a = 0,b;
	long int quantity,sign;
	
	cout << "Выберите какой символ вы хотите использовать:"<<endl<<
		"1. |" << endl <<
		"2. =" << endl<< endl;
	cin >> sign;

	switch(sign)
	{	
case 1:
	
		cout << "|" << endl;
		break;

	case 2:
		cout << "=" << endl;
		break;
	default:
		cout << "Ошибка! Пункт меню отсутствует!" << endl;
		
	}



	cout << "Введите количество символов для вывода: ";
	cin >> quantity;
	cout << endl << endl;
	system("cls");





	cout << "Выберите какую линию вы хотите поставить:" << endl <<
		"1.Вертикальная" << endl <<
		"2.Горизонтальная" << endl;
	cin >> b;

switch (b)
{
	case 1:
	
		while (a < quantity)
		{
			cout << "|\n";
			a++;
		}
			break;
	

		case 2:
		
			while (a < quantity)
			{
				cout << "=";
				a++;
			}
			break;

		default:
			cout << "Ошибка! Пункт меню отсутствует!" << endl;
		}


}