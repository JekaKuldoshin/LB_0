//Прототипы функции

#include <iostream>

using namespace std;

void Foo();

int main()
{
    setlocale(LC_ALL, "rus");

    Foo();
}


void Foo()
{
    cout << "Я функция, меня Вывели!!" << endl;
}