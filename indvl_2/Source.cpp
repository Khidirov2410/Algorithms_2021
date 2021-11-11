#include <iostream>
#include <cmath>
using namespace std;
const char* ERROR_NOT_INTEGER = "����� ������������ ������ ����� ��������������� ����� - �� ����� ������� �����";
const char* ERROR_NOT_NUMBER = "����� ������������ ������ ����� ��������������� ����� - �� ����� �������";
const char* ERROR_A0 = "���� a = 0, ������ ��� �� ���������� ���������";
const char* ERROR_OTS = "��� x �� �������� � ������� ����������� ��������� �� -1 �� 1";

long double fact(int x)
{
    if (x < 0) {
        return 0;
    }
    if (x== 0) {
        return 1;
    }
    else {
        return x * fact(x - 1);
    }
}

int main() {
    setlocale(0, "");

    double x;
    double numberMax;
    double absError;
    double step;

    try{
        cout << "������� x (������� ����������� ��������� �� - 1 �� 1)" << endl;
        if (cin >> x) {

        }
        else
        {
            cin.ignore(100, '\n');
            cin.clear();
            throw  ERROR_NOT_NUMBER;
            return 1;

        }

        cout << "������� ���������� ���������" << endl;
        if (cin >> numberMax) {

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

        cout << "������� �����������" << endl;;
        if (cin >> absError) {

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
        cout << "x" << x << "Numb " << numberMax << "error" << absError << endl;
    }
    catch (const char* error) {
        cerr << endl << error << endl;
    }
    return 0;
}



