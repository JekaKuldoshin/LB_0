#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Rus");
	cout << "Наш калькулятор еще в разработке." << endl;
	cout << "Для вас пока мы можем предоставить возможность использовать сложение." << endl<<endl;
	cout << "Введите число а: (нажмите Enter)" << endl;

	long long int a, b, Result;
	
	cin >> a;
	cout << "Введите число b: (нажмите Enter)" << endl;


	cin >> b;
	

	Result = a + b;

	cout << "Результат операции: " <<Result<< endl;


}
