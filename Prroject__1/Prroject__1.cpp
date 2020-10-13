#include <iostream>
using namespace std;

int main()
{
	int a1, b1, c1; //Эта переменая используеться для целых числовых операций
	a1 = 22;
	b1 = 45;
	c1 = 32;

	cout << "\t\t\t\t" << a1 << "\n\n";
	cout << "\t\t\t\t" << b1 << "\n\n";
	cout << "\t\t\t\t" << c1 << "\n\n";

	double a2, b2, c2; //Эта переменая используеться для вывода не целых чисел (1.5)
	a2 = 1.5;
	b2 = 2.55;
	c2 = 87.54;
	cout << "\t\t" << a2 << "\n\n";
	cout << "\t\t" << b2 << "\n\n";
	cout << "\t\t" << c2 << "\n\n";

	bool a3, b3, c3; //Эта переменая отвечает за логические операции (True or False)

	a3 = false;
	b3 = true;
	c3 = false;

	cout << "\t\t\t\t\t\t\t\t\t" << a3 << endl<<endl;
	cout << "\t\t\t\t\t\t\t\t\t" << b3 << endl<<endl;
	cout << "\t\t\t\t\t\t\t\t\t" << c3 <<  endl<<endl<<endl;


	char a, b, c; // Это переменая используеться для символов.
	a = '$';
	b = '@';
	c = '#';


	cout << "\t\t\t\t\t\t" << c << " \n\n";
	cout <<"\t\t\t\t\t\t" << a << " \n\n";
	cout << "\t\t\t\t\t\t" << b <<" \n\n"<< endl;
}