#include <iostream>
#include <algorithm>


int main() {

    setlocale(LC_ALL, "Russian"); //#include <windows.h> SetConsoleOutputCP(CP_UTF8);

    // �������������

    int f_el = 0;
    int s_el = 0;
    int th_el = 0;
    int temp  = 0;
    int countr = 0;

    
    std::cout << "������� �������� ������������������ ��� ����������� ��������� ����������. (������������������ ������ ������������ ������ 0) " << std::endl;

    // ��������� �������� �����
    
    if (std::cin >> f_el >> s_el >> th_el >> temp) {

    }
    else
    {
        std::cin.ignore(100, '\n');
        std::cin.clear();
        std::cout << "����� ������������ ������ ����� ����� - �� ����� �������";
        return 1;

    }

   // ������� �� �����

    if ((f_el == 0) or (s_el == 0) or (th_el == 0)) {
        std::cout << "������������ ����� ��� ����������� ��������� ����������";
        return 1;
    }

   // ��������� �������� �� ����� ��� ������� �����

    if ((s_el > f_el) and (s_el > th_el)) {
        countr++;
    }

   // ���� ��� ���������� ���-��

    while (temp != 0) {

        f_el = s_el;
        s_el = th_el;
        th_el = temp;

        if ((s_el > f_el) and (s_el > th_el)) {
            countr++;
        }

        // �������� ������ �� �����

        if (std::cin >> temp) {

        }
        else
        {
            std::cin.ignore(100, '\n');
            std::cin.clear();
            std::cout << "����� ������������ ������ ����� ����� - �� ����� �������";
            return 1;

        }
    }
    std::cout << countr;

    return 0;
}