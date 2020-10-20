#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	int symbolCount;
	char symbol;
	int lineType;
	int index = 0;

	cout << "Введите количество линий: " << endl;
	cin >> symbolCount;

		cout << "Введите символ: " << endl;
		cin >> symbol;

		cout << "Выберите тип линий: " << endl
			<< "1.Горизонтальная " << endl
			<< "2.Вертикальная " << endl;
		cin >> lineType;

		if (lineType != 1 && lineType != 2)
		{
			cout << "Такого значения в меню нет." << endl;
		
		}


		while (index<symbolCount)
		{
			if (lineType == 1)
			{
				cout << symbol;
			}

			if (lineType == 2)
			{
				cout << symbol << endl;
			}

			index++;

		}

		cout << endl << endl;

}
