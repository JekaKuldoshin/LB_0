#include "Sum.h"
#include <string>

using namespace std;


void Bring(mon spis[], int spis_size)
{
	for (int i = 0; i < spis_size; i++) {
		system("cls");
		cout << "| ѕроект поиска внеземных сигналов є" << i + 1 << " |" << endl;
		cout << "|-------------------------------------|" << endl;
		cout << "¬ведите год -> ";
		cin >> spis[i].sc;                                      /*вводим в список [1].год */
		cout << "¬ведите им€ научного руководител€ -> ";
		cin >> spis[i].name;
		cout << "¬ведите диаметр антенны (м) -> ";
		cin >> spis[i].size;
		cout << "¬ведите рабочую частоту (ћ√ц) -> ";
		cin >> spis[i].mhz;
	}
}