#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int a = 0;


		for (int i = -15; i <= 15; i++)
	{
			
			if (i % 2 ==0 ) {
				a += i;
			}
		
	
	
		cout << "Переменная a= " << a << endl;
	}
}