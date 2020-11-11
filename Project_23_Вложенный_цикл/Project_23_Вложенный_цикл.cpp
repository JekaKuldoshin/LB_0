#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Rus");

	for (int i = 1; i < 5; i++)
	{
		cout << "сработал 1-й цикл For интеграции №" << i << endl;
		for (int j = 1; j < 5; j++)
		{
			cout << "\tсработал 2-й цикл For интеграции №" << j << endl;
		}
	}


}