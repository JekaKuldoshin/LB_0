#include<iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Rus");

	int a = 0;
	cout << a << endl;

	a = a + 20;
	cout << a << endl;
	a += 20;
	cout << a << endl;

	a -= 10;
	cout << a << endl;

	a *= 2;
	cout << a << endl;

	a /= 2;
	cout << a << endl;
}