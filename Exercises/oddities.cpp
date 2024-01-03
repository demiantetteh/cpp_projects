#include <iostream>

int main()
{
    bool even;
    int n;
    int numbers[n];

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (numbers[j] % 2 == 0)
        {
            even = true;
        }
        else
        {
            even = false;
        }

        if (even)
        {
            std::cout << numbers[j] << " is even" << std::endl;
        }
        else
        {
            std::cout << numbers[j] << " is odd" << std::endl;
        }
    }

    return (0);
}
