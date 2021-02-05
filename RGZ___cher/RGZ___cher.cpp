#include<iostream>
#include <iomanip>
#include<chrono>
#define M 100;

using namespace std;



void Timer(int a, int i )
{

	for (int i = 0; i < M; i++)
	{
		//system("pause");
		//Sleep(1000);

		auto start = std::chrono::high_resolution_clock::now();

		

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		//std::cout << "Duration " << i << " = " << duration.count() << "s\n";
		dur_arr[i] = duration.count();
	}


};

//Обмен массива 
void swapEl(int* arr, int i)
{
	int buff;
	buff = arr[i];
	arr[i] = arr[i - 1];
	arr[i - 1] = buff;
}

//ф-ция "шейкер"-сортировки
void myShakerSort(int* arr, int size)
{
	int leftMark = 1;
	int rightMark = size - 1;
	while (leftMark <= rightMark)
	{
		for (int i = rightMark; i >= leftMark; i--)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		leftMark++;


		for (int i = leftMark; i <= rightMark; i++)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		rightMark--;

		cout << "\nИтерация: " << leftMark - 1; // счетчик количества итераций
	}
}

int main()
{

	double dur_arr [M];
	long F = 0;
	double aver_dur = 0;
	setlocale(LC_ALL, "rus");
	int buffer, selection;
link:
	cout << "------------------------------|" << endl;
	cout << " Расчетно графическое задание |" << endl;
	cout << "                              |" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "     Шейкерная сортировка     |" << endl;
	cout << "------------------------------|" << endl << endl;

	/*int size = 0;*/
	int size1 = 5;
	cout << "Размер массива -> " << size1 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A1 = new int[size1];
	for (int i = 0; i <= (size1 - 1); i++)
	{
		A1[i] = rand() % (size1 * 5);
		cout << A1[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	myShakerSort(A1, size1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size1; k++)
	{
		cout << A1[k] << " | ";
	}
	
	cout << endl;
	for (int i = 0; i < M; i++)
	{
		std::cout << "Duration " << i << " = " << dur_arr[i] << "s\n";
		if (i > 0) aver_dur += dur_arr[i];
	}
	std::cout << "Duration a" << " = " << aver_dur / (M - 1) << "s\n";
	


	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	
}