#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	for (int i = 0; i < 5; i++)
	{
		if (i == 2)
		{
			continue;
		}

		cout << "Переменная i=" << i << endl;

	}

}