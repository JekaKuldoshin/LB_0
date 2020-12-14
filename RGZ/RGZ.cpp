
#include<iostream>
#include<chrono>
#include <clocale>
#include<conio.h>
#include<iomanip>

using namespace std;

//ф-ция для времени
class Timer
{
private:
	// Псевдонимы типов используются для удобного доступа к вложенным типам
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<clock_t> m_beg;

public:
	Timer() : m_beg(clock_t::now())
	{
	}

	void reset()
	{
		m_beg = clock_t::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}
};




//ф-ция для обмена значений ячеек
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

		cout << "\nИтерация: " << leftMark - 1; // просмотр количества итераций
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
link:
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
	Timer t1;
	cout << endl;
	double time1 = t1.elapsed();
	cout << "\nВремя выполнение  ->  " << time1 << '\n';
	int num1 = size1;
	
	
	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	_getch();
	system("cls");
	//}
	//else
	//{
	//	{
	//		if (size = 0)    //создал условия если вводим 0
	//		{
	//			cout << "Ошибка! Массив не может принимать значение нуля." << endl;
	//			_getch();
	//			system("cls");
	//			goto link;
	//		}
	//		else //создал условия если мы введем число меньше нуля
	//		{
	//			cout << "Ошибка! Массив не может принимать значение меньше нуля." << endl;
	//			_getch();
	//			system("cls");
	//			goto link;
	//		}
	//	}
	//	return 0;
	//}
	////Прописал случаи с неправильным набором 

		/////////////////////////////////////////////////////////////////////////////
	
		/*int size = 0;*/
		int size2 = 10;
		cout << "Размер массива -> " << size2 << endl << endl;
		/*cin >> size;*/
		/*if (size > 0)
		{*/
		int* A2 = new int[size2];
		for (int i = 0; i <= (size2 - 1); i++)
		{
			A2[i] = rand() % (size2 * 5);
			cout << A2[i] << " | ";
		}
		//for (int k = 0; k < size; k++)
		//{
		//	A[k] = size - k; // запись значений по убыванию
		//	cout << A[k] << " | ";
		//}

		myShakerSort(A2, size2); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size2; k++)
		{
			cout << A2[k] << " | ";
		}
		Timer t2;
		cout << endl;
		double time2 = t2.elapsed();
		cout << "\nВремя выполнение  ->  " << time2 << '\n';
		int num2 = size2;

		

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
	
	//////////////////////////////////////////////////////////////////////
	
		/*int size = 0;*/
		int size3 = 15;
		cout << "Размер массива -> " << size3 << endl << endl;
		/*cin >> size;*/
		/*if (size > 0)
		{*/
		int* A3 = new int[size3];
		for (int i = 0; i <= (size3 - 1); i++)
		{
			A3[i] = rand() % (size3 * 5);
			cout << A3[i] << " | ";
		}
		//for (int k = 0; k < size; k++)
		//{
		//	A[k] = size - k; // запись значений по убыванию
		//	cout << A[k] << " | ";
		//}

		myShakerSort(A3, size3); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size3; k++)
		{
			cout << A3[k] << " | ";
		}
		Timer t3;
		cout << endl;
		double time3 = t3.elapsed();
		cout << "\nВремя выполнение  ->  " << time3 << '\n';
		int num3 = size3;

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
	
	//////////////////////////////////////////////////////////////
	
		/*int size = 0;*/
		int size4 = 20;
		cout << "Размер массива -> " << size4 << endl << endl;
		/*cin >> size;*/
		/*if (size > 0)
		{*/
		int* A4 = new int[size4];
		for (int i = 0; i <= (size4 - 1); i++)
		{
			A4[i] = rand() % (size4 * 5);
			cout << A4[i] << " | ";
		}
		//for (int k = 0; k < size; k++)
		//{
		//	A[k] = size - k; // запись значений по убыванию
		//	cout << A[k] << " | ";
		//}

		myShakerSort(A4, size4); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size4; k++)
		{
			cout << A4[k] << " | ";
		}
		Timer t4;
		cout << endl;
		double time4 = t4.elapsed();
		cout << "\nВремя выполнение  ->  " << time4 << '\n';
		int num4 = size4;

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
	
	//////////////////////////////////////////////////////

	
		/*int size = 0;*/
		int size5 = 25;
		cout << "Размер массива -> " << size5 << endl << endl;
		/*cin >> size;*/
		/*if (size > 0)
		{*/
		int* A5 = new int[size5];
		for (int i = 0; i <= (size5 - 1); i++)
		{
			A5[i] = rand() % (size5 * 5);
			cout << A5[i] << " | ";
		}
		//for (int k = 0; k < size; k++)
		//{
		//	A[k] = size - k; // запись значений по убыванию
		//	cout << A[k] << " | ";
		//}

		myShakerSort(A5, size5); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size5; k++)
		{
			cout << A5[k] << " | ";
		}
		Timer t5;
		cout << endl;
		double time5 = t5.elapsed();
		cout << "\nВремя выполнение  ->  " << time5 << '\n';
		int num5 = size5;

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
	
	/////////////////////////////////////////////////////
	
		/*int size = 0;*/
		int size6 = 30;
		cout << "Размер массива -> " << size6 << endl << endl;
		/*cin >> size;*/
		/*if (size > 0)
		{*/
		int* A6 = new int[size6];
		for (int i = 0; i <= (size6 - 1); i++)
		{
			A6[i] = rand() % (size6 * 5);
			cout << A6[i] << " | ";
		}
		//for (int k = 0; k < size; k++)
		//{
		//	A[k] = size - k; // запись значений по убыванию
		//	cout << A[k] << " | ";
		//}

		myShakerSort(A6, size6); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size6; k++)
		{
			cout << A6[k] << " | ";
		}
		Timer t6;
		cout << endl;
		double time6 = t6.elapsed();
		cout << "\nВремя выполнение  ->  " << time6 << '\n';
		int num6 = size6;

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
	
	/////////////////////////////////////////////////////
	
		/*int size = 0;*/
		int size7 = 35;
		cout << "Размер массива -> " << size7 << endl << endl;
		/*cin >> size;*/
		/*if (size > 0)
		{*/
		int* A7 = new int[size7];
		for (int i = 0; i <= (size7 - 1); i++)
		{
			A7[i] = rand() % (size7 * 5);
			cout << A7[i] << " | ";
		}
		//for (int k = 0; k < size; k++)
		//{
		//	A[k] = size - k; // запись значений по убыванию
		//	cout << A[k] << " | ";
		//}

		myShakerSort(A7, size7); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size7; k++)
		{
			cout << A7[k] << " | ";
		}
		Timer t7;
		cout << endl;
		double time7 = t7.elapsed();
		cout << "\nВремя выполнение  ->  " << time7 << '\n';
		int num7 = size7;

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
	
	/////////////////////////////////////////////////////
	
		/*int size = 0;*/
		int size8 = 40;
		cout << "Размер массива -> " << size8 << endl << endl;
		/*cin >> size;*/
		/*if (size > 0)
		{*/
		int* A8 = new int[size8];
		for (int i = 0; i <= (size8 - 1); i++)
		{
			A8[i] = rand() % (size8 * 5);
			cout << A8[i] << " | ";
		}
		//for (int k = 0; k < size; k++)
		//{
		//	A[k] = size - k; // запись значений по убыванию
		//	cout << A[k] << " | ";
		//}

		myShakerSort(A8, size8); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size8; k++)
		{
			cout << A8[k] << " | ";
		}
		Timer t8;
		cout << endl;
		double time8 = t8.elapsed();
		cout << "\nВремя выполнение  ->  " << time8 << '\n';
		int num8 = size8;

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
	
	/////////////////////////////////////////////////////

	
		/*int size = 0;*/
		int size9 = 45;
		cout << "Размер массива -> " << size9 << endl << endl;
		/*cin >> size;*/
		/*if (size > 0)
		{*/
		int* A9 = new int[size9];
		for (int i = 0; i <= (size9 - 1); i++)
		{
			A9[i] = rand() % (size9 * 5);
			cout << A9[i] << " | ";
		}
		//for (int k = 0; k < size; k++)
		//{
		//	A[k] = size - k; // запись значений по убыванию
		//	cout << A[k] << " | ";
		//}

		myShakerSort(A9, size9); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size9; k++)
		{
			cout << A9[k] << " | ";
		}
		Timer t9;
		cout << endl;
		double time9 = t9.elapsed();
		cout << "\nВремя выполнение  ->  " << time9 << '\n';
		int num9 = size9;
		
		cout << "\nНажмите клавишу Enter для получения результатов..." << endl;
		_getch();
		system("cls");
	
	/////////////////////////////////////////////////////
		int n = 6;

		cout << endl;

	cout << " |-----------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;
	cout << " |                       |                                           Количество элементов в массиве                                           |" << endl;
	cout << " |                       |--------------------------------------------------------------------------------------------------------------------|" << endl; 
	cout << " |                       | " << setw(n) << num1 << setw(5) << "     | " << setw(n) << num2 << setw(5) << "     | " << setw(n) << num3 << setw(5) << "     | " << setw(n) << num4 << setw(5) << "     | " << setw(n) << num5 << setw(5) << "     | " << setw(n) << num6 << setw(5) <<"     | " << setw(n) << num7 << setw(5) << "     | " << setw(n) << num8 << setw(5) << "     | " << setw(n) << num9 << setw(5) << "     |" << endl;
	cout << " |-----------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;
	cout << " | Шейкерная сортировка  | "<<setw(10) << time1 << " | " <<setw(10) << time2 << " | " << setw(10) << time3 << " | " << setw(10) << time4 << " | " << setw(10) << time5 << " | " << setw(10) << time6 << " | " << setw(10) << time7 << " | " << setw(10) << time8 << " | " << setw(10) << time9 << " |" << endl;
	cout << " |-----------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;

	_getch();
		return 0;



}   