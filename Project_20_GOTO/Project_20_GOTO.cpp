#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Один" << endl;

	goto link;

	cout << "Два" << endl;
	cout << "Три" << endl;

    link:

	cout << "Четыре" << endl;
	cout << "Пять" << endl;


	system("pause");
}