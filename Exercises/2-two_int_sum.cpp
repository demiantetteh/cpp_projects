#include <iostream>

int main()
{
    int x, y, sum;

    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;

    sum = x + y;
    std::cout << "The sum is: " << sum << '\n';

    return (0);
}
