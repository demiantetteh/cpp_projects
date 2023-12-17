#include <iostream>

int main()
{
    int num, sum, rev = 0;
    bool sign;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0)
    {
        num *= -1;
        sign = true;
    }

    while(num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }

    if (sign == true)
    {
        rev *= -1;
    }
    std::cout << "Rev: " << rev << std::endl;

    return (0);
}