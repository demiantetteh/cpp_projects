#include <iostream>

int main()
{
    double num1, num2, num3;
    double high, mid, low;

    std::cout << "*****************************\n"
              << "       ASCENDING ORDER       \n"
              << "*****************************\n\n";

    std::cout << "Please enter 3 numbers: ";
    std::cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3)
    {
        high = num1;
        if(num2 > num3)
        {
            mid = num2;
            low = num3;
        }
        else{
            mid = num3;
            low = num2;
        }
        std::cout << "\nAscending Order of the Numbers you entered\n-> "
                  << low << ", " << mid << ", " << high << std::endl;
    }
    else if(num2 > num1 && num2 > num3)
    {
        high = num2;
        if(num1 > num3)
        {
            mid = num1;
            low = num3;
        }
        else{
            mid = num3;
            low = num1;
        }
        std::cout << "\nAscending Order of the Numbers you entered\n-> "
                  << low << ", " << mid << ", " << high << std::endl;
    }
    else if(num3 > num1 && num3 > num2)
    {
        high = num3;
        if(num1 > num2)
        {
            mid = num1;
            low = num2;
        }
        else{
            mid = num2;
            low = num1;
        }
        std::cout << "\nAscending Order of the Numbers you entered\n-> "
                  << low << ", " << mid << ", " << high << std::endl;
    }
    else{
        high = num1;
        mid = num2;
        low = num2;
        std::cout << "The numbers are EQUAL\n\n";
    }

    return (0);
}
