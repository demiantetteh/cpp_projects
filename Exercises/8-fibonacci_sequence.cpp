#include <iostream>

int main()
{
    int terms;

    std::cout << "Enter the number of terms: ";
    std::cin >> terms;

    int first = 1, second = 1;
    std::cout << "Fibonacci Series: ";

    for (int i = 0; i < terms; ++i)
    {
        std::cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    std::cout << std::endl;

    return 0;
}
