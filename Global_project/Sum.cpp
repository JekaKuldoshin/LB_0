#include "Sum.h"
#include <string>

using namespace std;


void Bring(mon spis[], int spis_size)
{
	for (int i = 0; i < spis_size; i++) {
		system("cls");
		cout << "| ������ ������ ��������� �������� �" << i + 1 << " |" << endl;
		cout << "|-------------------------------------|" << endl;
		cout << "������� ��� -> ";
		cin >> spis[i].sc;                                      /*������ � ������ [1].��� */
		cout << "������� ��� �������� ������������ -> ";
		cin >> spis[i].name;
		cout << "������� ������� ������� (�) -> ";
		cin >> spis[i].size;
		cout << "������� ������� ������� (���) -> ";
		cin >> spis[i].mhz;
	}
}