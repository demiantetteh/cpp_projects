#include <iostream>

int main()
{
    double mtons, ounces, packages, math;
    char ans;

    std::cout << "***************************************************\n"
              << "This is a Weight converter(Ounces -> Metric Tons\n"
              << "Hit ENTER/RETURN after entering your input\n";
    std::cout << "***************************************************\n\n";

    do{
        std::cout << "What's the total weight of the packages(ounces): ";
        std::cin >> ounces;

        mtons = ounces/32000.00;

        //fixing the precision
        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(4);

        std::cout << "The converted weight of " << ounces << " ounce(s) is: " << mtons << " Metric Tons\n\n";

        //checking for packages
        std::cout << "How many packages do you have?\n->";
        std::cin >> packages;
        math = 1.0/packages * mtons;
        std::cout.precision(6);
        std::cout << "A package weighs " << math << " Metric Tons\n\n";

        //checking to restart/exit the program
        std::cout << "Do you wish to restart/exit the program\n"
                  << " 'R' for RESTART\n"
                  << " 'E' for EXIT\n->";
        std::cin >> ans;

        if(ans == 'R' || ans == 'r')
            std::cout << "********RESTARTING THE PROGRAM**********\n";
        else if(ans == 'E' || ans == 'e')
            std::cout << "********EXITING THE PROGRAM*************\n";
        else
        {
            std::cout << "ENTER A VALID OPTION FROM THE CHOICES PROVIDED\n"
                      << "RESTART THE PROGRAM\n";
        }
    }while(ans == 'R' || ans == 'r');

    return (0);
}