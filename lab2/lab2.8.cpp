#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // ���� ��������
    int a;
    int b;
    int c;
    cout << "������� 3 ����� (����� ������������ ������ ����� ����� )" << endl;

    // �������� �����

    if (cin >> a >> b >> c) {

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
    
    if ((a == b) and (a == c) and (b == c)) {
        cout << "3 ����� ���������";
    }
    else if ((a == b) or (a == c) or (b == c)) {
        cout << "2 ����� ���������";
    }
    else {
        cout << "��� ����������� �����";
    }
    return 0;
}