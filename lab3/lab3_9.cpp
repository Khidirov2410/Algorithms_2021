#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // ���� ��������

    int a;


    cout << "������� ������� ������������ (����� ������������ ������ ����� ��������������� �����)" << endl;

    // �������� �����

    if (cin >> a) {

        if (cin.peek() == EOF or cin.peek() == '\n')
        {

        }
        else
        {

            cout << endl << "����� ������������ ������ ����� ��������������� ����� - �� ����� ������� ����� " << endl;
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
    if (a < 2) {
        cout << "����������� �� ����������";
        return 1;
    }
    // ������

    for (int i = 1; i <= a-1; i++) {

        for (int j = 1; j <= a; j++) {
        
            if ((j == 1) or (j == i)) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
            if (j == a) {
                cout << endl;
            }
        }
    }
    for (int i = 1; i <= a; i++) {
        cout << "* ";
    }


    return 0;
}