#include<iostream>
#include<math.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Это программа создана для сравнивания чисел." << endl;
	cout << "После набора числа, нажмите \"Enter\" " << endl<<endl;

	int x, y,result,Calculate;
    char oper = '<';

    Calculate;
    while (true)
    {
        cin >> x >> oper >> y;
        result = Calculate(x, oper, y);
        cout << "Result is: " << result << endl;
    }
    return 0;
}

#include "Calculator.h.cpp/"
double Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '<':
        return x < y;
    case '>':
        return x > y;
    case '<=':
        return x <= y;
    case '>=':
        return x >= y;
    default:
        return 0.0;
    }
}

