#include <iostream>

int main()
{
    std::cout << "***************************\n";
    std::cout << "Temperature Conversion Program\n";
    std::cout << "****************************\n";

    double temp;
    char unit;


    std::cout << "What unit would you like to convert to\n";
    std::cout << "C - Celsius\n";
    std::cout << "F - Fahrenheit\n";
    std::cin >> unit;

    if(unit == 'f' || unit == 'F')
    {
        std::cout << "Enter temp in C: ";
        std::cin >> temp;
        temp = (temp * 1.8) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'c' || unit == 'C')
    {
        std::cout << "Enter temp in F: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "ENTER A VALID UNIT\n";
    }

    return (0);
}
