#include <iostream>
using namespace std;

template <typename T1,typename T2>
T1 Sum(T1 a, T2 b)
{
    return a + b;
}

int main()
{
    cout << Sum(5,10) << endl;

    cout << Sum(5.5, 1.2) << endl;

    cout << Sum(5, 1.2) << endl;
}