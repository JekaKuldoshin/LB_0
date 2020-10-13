#include <iostream>

using namespace std;
int main()

{
	setlocale(LC_ALL, "Rus");

	const int COUNT_DAYS_IN_WEEK = 7; //это не изменное число

	const char NEW_LINE = '\n'; //Можна также использовать как для переноса и для табуляции (пробела)

	const char TAB = '\t';

	cout <<TAB<<TAB<< COUNT_DAYS_IN_WEEK << NEW_LINE;
 }