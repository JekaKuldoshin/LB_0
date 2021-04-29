#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	string path = "myFile.txt";

	/*ofstream fout;
	fout.open(path, ofstream::app);

	if (!fout.is_open())
	{
		cout << "Error!!" << endl;
	}
	else
	{
		cout << "Введите число-> ";
		int a;
		cin >> a;
		fout << "\n" << a;
	}

	fout.close();*/

	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Error!!" << endl;

	}
	else
	{
		cout << "File is open!" << endl;

	}
	fin.close();

	return 0;

}