#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c;
    cout << "Введите длины строн треугольника в порядке неубывания" << endl;
    cin >> a >> b >> c;

    if (cin.peek() != '\n')
    {
        cout << "Длины сторон треугольника должны быть заданы числами. Завершение программы.";
    }
    else if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "Значения длин сторон треугольника должны быть больше нуля. Завершение программы.";
    }
    else
    {
        if (a+b < c || a+c < b || b+c < a)    //проверка на существование треугольника
        {
            cout << "Такого треугольника не существует.Завершение программы.";
        }
        else
        {
            if (a == b and b != c)
            {
                cout<< "Треугольник равнобедренный";
            }
            else {
                if (a == b and b == c) {
                    cout << "Треугольник равносторонний";
                    exit(0);
                }
                if (pow(a, 2) + pow(b, 2) > pow(c, 2)) {
                    cout << "Треугольник остроугольный";
                }
                if (pow(a, 2) + pow(b, 2) < pow(c, 2)) {
                    cout << "Треугольник тупоугольный";
                }
                if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                    cout << "Треугольник прямоугольный";
                }
            }
        }
    }
    return 0;
}
