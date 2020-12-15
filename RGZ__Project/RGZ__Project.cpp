#include "iostream"
#include <ctime>  
#include <vector>
#include<iterator>

#include "iomanip"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0)); // генерация случайных чисел 
    int N, M, vibor, Max = -1000;
    cout << "Введите кол-во строк в матрице N=";
    cin >> N;
    cout << "\nВведите кол-во столбцов в матрице M=";
    cin >> M;
    // объявление двумерного динамического массива
    float** ptrarray = new float* [N];      // строки в массиве   
    for (int count = 0; count < N; count++)
        ptrarray[count] = new float[M];    //  столбцы 
    cout << "\nВведите 0 если хотите вручную заполнить матрицу\n"
        "или любую другую цифру если хотите авто заполнение\n"
        "Выбор:";
    cin >> vibor;
    if (vibor != 0)
    {
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                ptrarray[i][j] = rand() % 100;
    }
    else
    {
        cout << "\nЗаполняйте матрицу.\n";
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
            {
                cout << "элемент:[" << i << "][" << j << "]=";
                cin >> ptrarray[i][j];
            }
    }
    cout << "\nВаша матрица.\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << setw(3) << ptrarray[i][j];
        cout << endl;
    }
    cout << endl << endl;
    int* a = new int[N];                    //Буферный массив
    for (int i = 0; i < N; i++)
    {
        a[i] = -1000;
    }
    for (int k = 0; k < N + 1; k++) {
        for (int i = 0; i < N; i++)
            for (int j = 0; j < k; j++)
            {
                if (ptrarray[i][j] > a[j])
                {
                    a[j] = ptrarray[i][j];
                }
            }
    }

    vector<int> my_vector;   //создаем вектор
    //vector<int>::iterator the_iterator;
    cout << "Неупорядочный вектор:\n";
    for (int i = 0; i < N; i++) {   //заполним буферным массивом
        my_vector.push_back(a[i]);
    }


    for (int i = 0; i < N; i++) {   //выводим
        cout << setw(3) << my_vector[i];
    }
    cout << endl << endl;
    cout << "Упорядочный вектор:\n";
    vector<int> my_vec;    //создаем вектор который будет упорядоченным
    for (int i = 0; i < N; i++) {   //заполним буферным массивом
        my_vec.push_back(a[i]);
    }
    for (int j = 0; j < N - 1; j++)    //Сортируем
    {
        for (int i = 0; i < N - 1; i++) {
            if (my_vec[i] > my_vec[i + 1])
            {
                int temp = my_vec[i];
                my_vec[i] = my_vec[i + 1];
                my_vec[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++) {   //выводим
        cout << setw(3) << my_vec[i];
    }
    cout << endl << endl;
    delete a;
    // высвобождение памяти отводимой под двумерный динамический массив:   
    for (int count = 0; count < N; count++)
        delete[] ptrarray[count];
    system("pause");
    return 0;
}