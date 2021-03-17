#include "Fun.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int arr[size]{};
    int narr[size]{};
    int s = 0;

    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100 - 50;
    }

    cout << "Массив до :\n";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << "   ";
    }
    cout << endl;
    cout << endl;

    cout << "Массив после :\n";
    swp(arr);
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << "   ";
    }
    cout << endl;
    cout << endl;

    //
    for (int i = 1; i < size; ) {
        if (*(arr + i) < 0) {
            s++;
        }
        i += 2;
    }
    //

    cout << "Все отрицательные элементы с нечетными индексами" << endl;
    new_Arr(arr, narr);
    for (int i = 0; i < s; i++) {
        cout << *(narr + i) << "   ";
    }

}