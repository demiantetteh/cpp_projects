#include <iostream>

//very useless but just for the sake of understanding and practice

bool divisible(int num);
/**
 * divisible: Checks if a number is divisible by numbers >= input
 *            And prints thme out                                   (A pretty useless function)
 * @num: The number to be divided
 * return: Returns a true if divisible with no remainders, else false
*/

int main()
{
    int num;
    bool div;

    std::cout << "**************************\n"
              << "        DIVISIBLE??       \n"
              << "**************************\n\n";
    
    std::cout << "Enter the number to be checked: ";
    std::cin >> num;

    div = divisible(num);

    return (0);
}
bool divisible(int num)
{
    bool div = true;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            div = true;
            std::cout << num << " is divisible by " << i << std::endl;
        }
        else{
            div = false;
            std::cout << num << " is not divisible by " << i << std::endl;
        }
    }

    return (div);
}