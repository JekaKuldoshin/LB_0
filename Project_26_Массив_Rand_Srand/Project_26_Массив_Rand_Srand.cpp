#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	srand(time(NULL));

	/*int a = rand() % 10 + 5;
	cout << a << endl;

	 a = rand() % 10 + 5;
	cout << a << endl;*/


	int const SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;

	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

}