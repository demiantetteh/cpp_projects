#include <iostream>

int main()
{
    bool prime;

    std::cout << "**************************\n"
              << "       PRIME NUMBERZ      \n"
              << "**************************\n\n";
              
    for(int num = 3; num <= 100; num++)
    {
        prime = true;
        for(int div = 2; div < num; div++)
        {
            if(num % div == 0)
                prime = false;
        }
        if(prime == true)
         std::cout << num << std::endl;
    }
    return (0);
}
