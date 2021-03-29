//#include <iostream>
//#include <iomanip>
//#include <windows.h>
//#include <time.h>
//#include <string>
//#include<conio.h>
//#define size 10
//
//using namespace std;
//
//void byChance(int arr[])
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(arr + i) = rand() % 20;
//		
//	}
//}
//
//
//
//int main()
//{
//	int arr[size]{};
//	int* min;
//		int* max;
//		int* p; 
//		int* pp;
//		p = arr; max = arr;
//		pp = arr;  min = arr;
//		byChance(arr);
//		for (int i = 0; i < size; i++)
//		{
//
//			cout << *(arr + i) << " ";
//		}
//
//		for (int i = 0; i < size; i++) {
//			if (*p > * max) {
//				max = p;   //переставили указатель
//			}
//			p++;
//		}
//		
//		cout << "\n*max = " << *max;
//
//		
//		for (int i = 0; i < size; i++) {
//			if (*pp < * min) {
//				min = pp;   //переставили указатель
//			}
//			pp++;
//		}
//		cout << "\n*min = " << *min;
//
//
//}


#include <iostream>
#include <iomanip>
#include <time.h>


using namespace std;

# define N 8	
# define M 8

int Sum(int** A)
{
	int tmp = 0;
	for (int i = 0, j = N - 1; i < N; i++, j--)
	{
		if (A[i][j] % 2) // И тут
			tmp += A[i][j];
	}
	return tmp;
}


int main()
{
	int result;
	int** A = new int* [N];  //указатели на строки
	for (int i = 0; i < N; i++)
		A[i] = new int[M];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			*(*(A + i) + j) = rand() % 20;
			cout << setw(3) << *(*(A + i) + j);
		}
		cout << endl;
	}

	cout << endl << endl;

	result = Sum(A);
	cout << result << endl;



}