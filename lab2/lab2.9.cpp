#include <iostream>
using namespace std;


int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // ���� ��������

    int arr[3] = { 0 , 0, 0 };
    int ch = 0;
    int nch = 0;


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

    for (int i = 0; i < 3; i++) {
        if (arr[i] % 2 == 0) {
            ch = ch + 1;
        }
        else {
            nch = nch + 1;
        }
    }
    if (nch > 0 and ch > 0) {
        cout << "��";
    }
    else {
        cout << "���";
    }
    return 0;
}