#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Это программа создана для сравнивания чисел." << endl;
	cout << "После набора числа, нажмите \"Enter\" " << endl<<endl;

	int a, b,spare;
	char big, small, big_rawno, small_small;

	cout << "Введите число a: " << endl;
	cin >> a;
	cout << "Введите число b: " << endl;
	cin >> b;

	spare = (a <= b);
	cout << endl;
	cout << "Формула для сравнивания: а < или = b" << endl;
	
	cout << "Если True - 1" << endl;
	cout << "Если False - 0" << endl<<endl;

	cout <<"Результат: "<< spare << endl;

	



}