#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);
    
    // ���� ��������

    int hunter[2] = { 0 , 0 }; int victim[2] = { 0 , 0 };


    cout << "������� 4 ����� - ���������� 2 �����: ������� ���������� ����� ������, ����� ���������� ������ ����������. ������� ����������� ���������� �� ���������, ����� �� ����������� (����� ������������ ������ ����� ��������������� ����� �� 1 �� 8 )" << endl;

    // �������� �����

    if (cin >> hunter[0] >> hunter[1] >> victim[0] >> victim[1]) {

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

    if ((8 < hunter[0]) or (hunter[0] < 1) or (8 < hunter[1]) or ( hunter[1] < 1) or  (8 < victim[0]) or (victim[0] < 1) or (8 < victim[1]) or (victim[1] < 1)) {
        cout << "�� ����� �� ������� ����";
        return 1;
    }

    //cout << hunter[0] << " h1 " << hunter[1] << " h2 " << victim[0] << " v1 " << victim[1] << endl;

    // �������� 

    if ((hunter[0] == victim[0]) or (hunter[1] == victim[1])) {
        cout << "����� ������� ������ ����������";
    }
    else {
        cout << "����� �� ����� ������ ������ ����������";
    }
    
    return 0;
}