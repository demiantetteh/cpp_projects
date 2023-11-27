#include <iostream>

int main()
{
    int number;
    
    std::cout << "Enter the number: ";
    std::cin >> number;

    for(int div = 1; div <= number; div++)
    {
        if(number % div == 0)
        {
            std::cout << "Divisor: ";
            std::cout << div << std::endl;
        }
    }
    return (0);
}