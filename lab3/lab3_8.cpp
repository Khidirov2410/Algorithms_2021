#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // ���� ��������

    int a;


    cout << "������� ������� �������� (����� ������������ ������ ����� ��������������� �����)" << endl;

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
        cout << "������� �� ����������";
        return 1;
    }
    // ������

    for (int i = 1; i <= a; i++) {

        if ((i == 1) or (i == a)) {

            for (int j = 1; j <= a; j++) {
                cout << "* ";
                if (j == a) {
                    cout << endl;
                }

            }
            

        }
        else {
            for (int j = 1; j <= a; j++) {

                if ((j == 1) or (j == a)) {

                    cout << "* ";
                    if (j == a) {
                        cout << endl;
                    }
                }
                else {
                    cout << "  ";
                }

            }
        }

    }

    return 0;
}