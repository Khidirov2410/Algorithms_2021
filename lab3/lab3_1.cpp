#include <iostream>
#include <algorithm>


int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // �������������

    int temp  = 1;
    int countr = 0;

    
    std::cout << "������� �������� ������������������ ��� ����������� ����� ���� ��������� �����. (������������������ ������ ������������ ������ 0) " << std::endl;

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
        countr += temp; 
    }
    std::cout << countr;

    return 0;
}