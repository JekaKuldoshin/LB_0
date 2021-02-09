#include <iostream>
using namespace std;


int Sum(int a, int b)
{
    return a + b;
}

double Sum(double a, double b)
{
    return a + b;
}

void main()
{
    cout << Sum(5.5, 8.2) << endl;
    
    cout << Sum(5, 8) << endl;

}