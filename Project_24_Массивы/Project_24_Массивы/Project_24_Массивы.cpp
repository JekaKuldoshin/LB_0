#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	/*srand(time(NULL));*/
    const int size = 10;

	int arr[size]{55,34,6,34,743,76,432,653,543,1};

	for (int i = 0; i < size; i++)
	{

		arr[i] = i;
	}




	for (int i = 0; i < size; i++)
	{
		
		cout << arr[i] << endl;
	}






}