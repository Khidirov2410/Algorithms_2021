#include <iostream>
using namespace std;
int main() {
    while (1) {

        setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

        // ���� ��������

        int god;

        cout << "������� 1 ����� - ����� ���� (����� ������������ ������ ����� ��������������� �����)" << endl;

        // �������� �����

        if (cin >> god) {

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

        // �������� �� �����������������

        if (god < 0) {
            cout << "����� ������������ ������ ����� ��������������� ����� - �� ����� ������������� �����";
            return 1;
        }

        // ������� ������

        if ((god % 4 == 0 and god % 100 != 0) or (god % 100 == 0 and god % 400 == 0)) {
            cout << god << " ��� ����������" << endl;
        }
        else {
            cout << god << " ��� �� ����������" << endl;
        }
    }
    return 0;
}