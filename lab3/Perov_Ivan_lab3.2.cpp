#include <iostream>
#include <cmath>
using namespace std;
const char* ERROR_NOT_INTEGER = "����� ������������ ������ ����� ��������������� ����� - �� ����� ������� �����";
const char* ERROR_NOT_NUMBER = "����� ������������ ������ ����� ��������������� ����� - �� ����� ������� �����";
const char* ERROR_A0 = "���� a = 0, ������ ��� �� ���������� ���������";

int main() {
    try {
        setlocale(LC_ALL, "Russian");  //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

        double a;
        double b;
        double c;
        double dsk;
        double x1;
        double x2;
        int x1check;
        int x2check;

        cout << "������� 3 ����� ����� ������ � ������� a b c - (����� ������������ ������ ����� �����)" << endl;
        if (cin >> a >> b >> c) {

            if (cin.peek() == EOF || cin.peek() == '\n')
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

        if (a == 0) {
            throw ERROR_A0;
            return 1;
        }
        dsk = sqrt((b * b) - (4 * a * c));

        x1 = (-b + dsk) / (2 * a);
        x2 = (-b - dsk) / (2 * a);

        x1check = (-b + dsk) / (2 * a);
        x2check = (-b - dsk) / (2 * a);

        if ((x1check == x1) and (x2check == x2)) {
            cout << "�����: " << endl << x1 << endl << x2;
        }
        else if (x1check == x1) {
            cout << "������������� ������ - " << x1 << endl;
        }

        else if (x2check == x2) {
            cout << "������������� ������  - " << x2;
        }
        else {
            cout << "������������� ������ �� ����������";
        }
    }
    catch (const char* error) {
        cerr << endl << error << endl;
    }
    return 0;
}