#include <iostream>

int main()
{
    double high = 0, low = 1000e1002, tries = 0;
    double num;

    std::cout << "*******************************************\n"
              << "             NON NUMBER READER             \n"
              << "*******************************************\n\n";

    std::cout << "This program reads numbers you enter until you enter a negative number\n"
              << std::endl;

    while(num > 0)
    {
        std::cout << "Please enter a number\n->";
        std::cin >> num;

        if(num > high)
            high = num;
        else if(num < low)
            low = num;

        tries++;
        std::cout << '\n' << std::endl;
    }

    std::cout << "The Greatest number you entered is: " << high << '\n'
              << "The Least number you entered is: " << low << '\n'
              << "The number of tries is: " << tries << '\n'
              << std::endl;

    return (0);
}
