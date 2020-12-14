//#include<iostream>
//#include<ctime>
//#include<iomanip>
//#include<conio.h>
//
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	srand(time(NULL));
//
//	int length = 0;
//	int num = 0;
//	int unsigned const SIZE = length;
//	int sum = 0;
//	int q=0;
//
//	cout << "Введите число: ";
//	cin >> num;
//
//	int* arr = new int[length];
//	int tmp = num;
//	while (tmp > 0)
//	{
//		tmp = tmp / 10;
//		length++;                //узнаем количество элементов в массиве
//	}
//	for (int i = 0; i < length; i++)
//	{
//		arr[i] = (num % 10);
//		q = q * 10 + arr[i];
//		num /= 10;
//	}
//
//	while (q > 0)
//	{
//		cout << q % 10 << " ";
//		q = q / 10;
//	}
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//
//
//
//	
//	
//
//	
//
//
//
//
//
//
//}

#include<iostream>
#include<ctime>
#include<iomanip>
#include<conio.h>


using namespace std;

int main()
{

    int x;
    int n = 0;
    int const SIZE = n;
    int temp;


    cin >> x;


    int* mas = new int[n];
    while (x > 0)
    {
        mas[n] = x % 10;
        x = x / 10;
        n++;
    }

    for (int i = 0; i <= n / 2; i++)
    {
        temp = mas[i];
        mas[i] = mas[n - i - 1];
        mas[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
}