#include "Matrix.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int* Ar, * Cr;
	int i, S;


	cout << "Введите размерность матрицы >";
	cin >> S;

	if (S <= 0)
	{
		cout << "Размерность слишком мала" << endl;
		exit(0);
	}
	if (S > 24)
	{
		cout << "Размерность слишком велика\n";
	    exit(0);
	}

	cout << "S = " << S << endl;

	if ((Ar = (int*)malloc (sizeof(int)*S*S)) == NULL);
	{
		cout << "Недостаток памяти\n" << end;
		exit(0);
	}

	fill(Ar, S);

}


void fill(int* A, int s)
{
	int* C;
	short l, r;
	int k = 1;



}