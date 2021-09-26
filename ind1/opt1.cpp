#include <iostream>
#include <windows.h>

const char* ERROR_NOT_NUMBER = "Ошибка: вы ввели не число!";
const char* ERROR_EMPTY_STRING = "Ошибка: вы ничего не ввели!";

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    try
    {
        int n = 0, count = -1;
        while(1)
        {
            int max = n;
            std::cin >> n;
            if (std::cin.fail()) {
                throw ERROR_NOT_NUMBER;
            }
            if (n == 0) {
                break;
            }
            if (n > max)
            {
                count++;
            }
        }
        if (count == -1)
        {
            throw ERROR_EMPTY_STRING;
        }
        if (std::cin.peek() != 10) {
            throw ERROR_NOT_NUMBER;
        }
        else
        {
            std::cout << count << " - количество чисел больше предыдущего";
        }
    }
    catch (const char* error)
    {
        std::cerr << std::endl << error << std::endl;
        return -1;
    }
    return 0;
}