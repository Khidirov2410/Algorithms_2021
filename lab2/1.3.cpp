#include <iostream>

int main()
{
    int l1, l2, col1, col2;
    std::cout << "Enter line and column number of the bishop: " << std::endl;
    std::cin >> l1 >> col1;
    if (std::cin.peek() != '\n')
    {
        std::cout << "The coordinates of the figures must be numbers. End of the program.";
    }
    else
    {
        std::cout << "Enter line and column number of another figure:" << std::endl;
        std::cin >> l2 >> col2;
        if (std::cin.peek() != '\n')
        {
            std::cout << "The coordinates of the figures must be numbers. End of the program.";
        }
        else if (l1 < 1 or l2 < 1 or col1 < 1 or col2 < 1 or l1 > 8 or l2 > 8 or col1 > 8 or col2 > 8)
        {
            std::cout << "The coordinates of the figures must be greatest than zero less than nine. End of the program.";
        }
        else
        {
            if (abs(l1-l2) == abs(col1-col2))
            {
                std::cout << "The bishop takes a figure.";
            }
            else
            {
                std::cout << "The bishop doesn't take a figure.";
            }
        }
    }
}
