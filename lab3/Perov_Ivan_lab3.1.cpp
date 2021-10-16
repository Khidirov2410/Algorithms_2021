#include <iostream>
using namespace std;
const char* ERROR_NOT_INTEGER = "����� ������������ ������ ����� ��������������� ����� - �� ����� ������� �����";
const char* ERROR_NOT_NUMBER = "����� ������������ ������ ����� ��������������� ����� - �� ����� ������� �����";
const char* ERROR_NEGATIVE_NUMBER = "����� ������������ ������ ����� ��������������� ����� - �� ����� ������������� �����";
int main() {
    try {
        setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

        // ���� 3 ��������

        int voroni;

        cout << "������� 1 ����� - ���������� ����� (����� ������������ ������ ����� ��������������� �����)" << endl;

        // �������� �����

        if (cin >> voroni) {

            if (cin.peek() == EOF or cin.peek() == '\n')
            {

            }
            else
            {

                throw ERROR_NOT_INTEGER;
                cin.ignore(100, '\n');
                cin.clear();
                return 1;

            }
        }
        else
        {
            cin.ignore(100, '\n');
            cin.clear();
            throw  ERROR_NOT_NUMBER;
            return 1;

        }

        // �������� �� �����������������

        if ((voroni < 0)) {
            throw ERROR_NEGATIVE_NUMBER;
            return 1;
        }

        if (voroni % 10 == 1 and voroni != 11) {
            cout << "� ���� " << voroni << " ������";
        }

        else if ((voroni % 10 == 2 or voroni % 10 == 3 or voroni % 10 == 4) and voroni != 12 and voroni != 13 and voroni != 14) {
            cout << "� ����" << voroni << " ������";
        }

        else {
            cout << "� ���� " << voroni << " �����";
        }
    }
    catch (const char* error) {
        cerr << endl << error << endl;
    }
    return 0;
}