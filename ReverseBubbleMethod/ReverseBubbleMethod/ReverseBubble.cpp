#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus"); //����������� �� �������

    int Array[10] = { 1,65,8,15,45,77,9,5,46,38 };

    cout << "��������� ������:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << Array[i];

        if (i < 9)
        {
            cout << ", ";
        }
    }
    cout << endl << endl;

    //�������� ������
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

    cout << "������ � ��������������� �����t ��������� ��������: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;

}