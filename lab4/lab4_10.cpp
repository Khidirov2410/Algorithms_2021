#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // ���� ��������

    int a;
    


    cout << "������� ������� ����� (����� ������������ ������ ����� ��������������� �����)" << endl;

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
        cout << "���� �� ����������";
        return 1;
    }
    // ������
   /*
    for (int i = a; i >= 1; i--) {
        for (int j = 1; i <= a; j++) {
            if ((j = a - i) or (j = a + 1)) {
                cout << "* ";
            }
            else {
                cout << " ";
            }
        }
    }
     */   

    int x1 = a;
    int x2 = a;

    for (int n = 0; n < a ; n++) {
        for (int i = 0; i < 2 * a + 1; i++) {
            if ((i == x1) or (i == x2)) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        x1--;
        x2++;
        cout << endl;
    }

    x1 += 2;
    x2 -= 2;

    for (int n = 0; n < a- 1; n++) {
        for (int i = 0; i < 2 * a + 1; i++) {
            if ((i == x1) or (i == x2)) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        x1++;
        x2--;
        cout << endl;
    }
    return 0;
}