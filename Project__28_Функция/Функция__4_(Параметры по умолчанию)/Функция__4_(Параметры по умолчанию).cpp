#include <iostream>
using namespace std;


void Foo(int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << "#" << endl;
    }

}

int main()
{
    Foo(6);
    system("pause");
}


