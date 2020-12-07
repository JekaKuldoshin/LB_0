#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	
	double arr[]{4,33,2523,643,3324};

	/*int a = sizeof(arr);
	int b = sizeof(int);


	cout << sizeof(arr)/sizeof(int) << endl;*/

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}




}