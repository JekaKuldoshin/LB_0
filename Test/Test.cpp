#include <iostream>
using namespace std;
int main()
{
	int x = 50, y = 30;
	int* p1, * p2;
	


	p1 = &x;
	p2 = &y;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	cout << "-----" << endl;
	*p1 = x+2;
	*p2 = y-2;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	cout << "-----" << endl;
	p2 = p1;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	cout << "-----" << endl;
	*p1 = x+5;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	cout << "-----" << endl;
	p2 = &y;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	cout << "-----" << endl;
	x = y;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	cout << "-----" << endl;
	*p2 = y - 10;
	*p1 = x + 10;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
}