#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // ���� ��������

    int arr[3] = { 0 , 0, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);


    cout << "������� 3 ����� (����� ������������ ������ ����� ����� )" << endl;

    // �������� �����

    if (cin >> arr[0] >> arr[1] >> arr[2]) {

        if (cin.peek() == EOF or cin.peek() == '\n')
        {

        }
        else
        {

            cout << endl << "����� ������������ ������ ����� ��������������� ����� - �� ����� ������� ����� ��� ������� ����� ��� �����45" << endl;
            cin.ignore(100, '\n');
            cin.clear();
            return 1;

        }
    }
    else
    {
        cin.ignore(100, '\n');
        cin.clear();
        cout << "����� ������������ ������ ����� ��������������� ����� - �� ����� �������";
        return 1;

    }
    
    sort(arr, arr + n);
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}