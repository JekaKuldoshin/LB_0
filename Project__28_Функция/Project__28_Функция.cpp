
#include <iostream>
using namespace std;

void foo()
{
    cout << "Я функция, меня вызвали!!" << endl;
}

int Sum(int a, int b)
{
    /*int result;
    result = a + b;*/

    return a + b;
}

int main()
{
    setlocale(LC_ALL, "rus");

    foo();
    cout << endl<<endl;

    /*int c;*/
    int q = 11;
    int w = 12;
   /* c = Sum(q, w);*/

    cout << Sum(q,w) << endl;
}

