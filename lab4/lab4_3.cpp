#include <iostream>
#include <algorithm>


int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // �������������

    int temp = 1;
    double countr = 0;
    double summ = 0;
    
    std::cout << "������� �������� ������������������ ��� ����������� �������� ��������������� ���� ������������� ��������� �����. (������������������ ������ ������������ ������ 0) " << std::endl;

    // ���� ��� ���������� �����

    while (temp != 0) {

        if (std::cin >> temp) {

        }
        else
        {
            std::cin.ignore(100, '\n');
            std::cin.clear();
            std::cout << "����� ������������ ������ ����� ����� - �� ����� �������";
            return 1;

        }
        if (temp > 0) {
            summ += temp;
            countr++;
        }

    }
    std::cout << summ / countr << " - ������� �������������� ���� ��������� �����";

    return 0;
}