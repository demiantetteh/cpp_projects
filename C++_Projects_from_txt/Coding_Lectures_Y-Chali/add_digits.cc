#include <iostream>

int main()
{
    int num = 9, sum;
    sum =0;

    while (num > 0)
    {
        sum = sum + num%10;
        num = num/10;
    }
    std::cout << sum;
}