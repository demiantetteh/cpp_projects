#include <iostream>

int main()
{
    int num;
    std::cout << "This program determines an even or odd number\n";
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num % 2 == 0)
        std::cout << num << " is an even number\n";
    else
        std::cout << num << " is an odd number \n";

    return (0);

}
