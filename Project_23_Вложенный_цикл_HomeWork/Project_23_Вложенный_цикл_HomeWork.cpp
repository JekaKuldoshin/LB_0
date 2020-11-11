#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int height, wight;
	

	cout << "Это программа рисует фигуры. Напишите высоту и ширину." << endl;
	cout << "Высота >";
	cin >> height;
	cout << "Ширина >";
	cin >> wight;
	cout << "____________________________________________________________________\n" << endl;

	for (int i = 1 ; i <= height; i++)
	{
		
		cout <<"*";
		

		for (int i2 = 1; i2 < wight; i2++)
		{
			
			cout << "*";
			
		}
		cout << "\n";
	}
	
	

}