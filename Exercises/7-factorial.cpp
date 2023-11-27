#include <iostream>

int main()
{
    int number;
    unsigned long long factorial = 1;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0)
    {
        std::cout << "Invalid number";
        return -1;
    }
    for (int i = 1; i <= number; ++i)
    {
        factorial *= i;
    }

    std::cout << "Factorial of " << number << " is " << factorial << std::endl;

    return 0;
}
