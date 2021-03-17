#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int value = 5;
	int* a = &value;
	cout << value << endl;
	cout << a << endl;


}