#include "Fun.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
link1:

    int selection;
    int s = 0;
    int count = 0;
    int result = 0;
    int check = 1;

    int arr[size]{};
    int NEWarr[size]{};


    byChance(arr);

    cout << "Количество елементов массива -> " << size << endl << endl;

    cout << "Элементы массива -> ";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << "\n\n";
    cout << "Массив для двухзначных чисел -> ";
    PrintArr(arr,count,NEWarr); 
    for (int i = 0; i < count; i++)
    {
        cout << *(NEWarr + i) << " ";
    }
    cout << endl;

    cout << endl;
    /* Обратились к функции суммы двухзначных чисел*/
    cout << "Сумма двухзначных чисел -> " << Sum(arr);
    cout << endl;
    cout << "\nНажмите клавишу Enter для возврата в меню..." << endl;
    _getch();
    system("cls");


}