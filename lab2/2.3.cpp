#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Enter three numbers" << std:: endl;
    std::cin >> a >> b >> c;
    if (std::cin.peek() != '\n')
    {
        std::cout << "Numbers must be entered. End of the program.";
    }
    else
    {
        if ((a == b) && (a == c))
        {
            std::cout << "3 identical numbers";
        }
        else if ((a != c) && (a != b) && (b != c))
        {
            std::cout << "0 identical numbers";
        }
        else
        {
            std::cout << "2 identical numbers";
        }
    }
}