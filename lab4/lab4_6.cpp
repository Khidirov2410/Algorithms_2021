#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // ���� ��������

    int hunter[2] = { 0 , 0 }; 


    cout << "������� 2 ����� - ���������� ������: ������� ����������� ���������� �� ���������, ����� �� ����������� (����� ������������ ������ ����� ��������������� ����� �� 1 �� 8 )" << endl;

    // �������� �����

    if (cin >> hunter[0] >> hunter[1]) {

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

    // �������� �� ����

    if ((8 < hunter[0]) or (hunter[0] < 1)) {
        cout << "�� ����� �� ������� ����";
        return 1;
    }


    // �������� 
    cout << "��� ��������� ����: ";

    for (int i = 1; i <= 8; i++){
        if (i != hunter[1]) {
            cout << hunter[0] << ":" << i << " ";
        }
    }

    for (int i = 1; i <= 8; i++) {
        if (i != hunter[0]) {
            cout << i << ":" << hunter[1] << " ";
        }
    }

    return 0;
}