#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int a = 1,b;
	b = ++a * a++;
	cout << b << endl;
	cout << a << endl;
	
	
}  