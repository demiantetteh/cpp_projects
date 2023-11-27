#include <iostream>

int main()
{
    int factorial = 1, number;

    std::cout << "Enter the number: ";
    std::cin >> number;

    for(int i = 1; i <= number; ++i)
    {
        factorial *= i;
    }

    std::cout << "Factorial of " << number << " is " << factorial << std::endl;

    return (0);
}