#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus"); //Локализация на русский

    int Array[10] = { 1,65,8,15,45,77,9,5,46,38 };

    cout << "Считываем массив:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << Array[i];

        if (i < 9)
        {
            cout << ", ";
        }
    }
    cout << endl << endl;

    //Обратный пузырёк
    for (int i = 0; i < 9; i++)
    {
        for (int j = 9; j > i; j--)
        {
            if (Array[j] < Array[j - 1])
            {
                int pus = Array[j];
                Array[j] = Array[j - 1];
                Array[j - 1] = pus;
            }
        }
    }

    cout << "Массив в отсортированном методt обратного Пузырька: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;

}