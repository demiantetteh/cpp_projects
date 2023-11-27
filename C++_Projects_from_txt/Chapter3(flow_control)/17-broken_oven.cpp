#include <iostream>

int main()
{
    //      README
    //this work is incomplete
    //it only reports temperatures that cannot be entered
    //it doesn't adjust the temperature, I'll come back to fix.

    int temp, hun, yten, ten, one;
    int dec_hun, dec_ten, dec_one;
    int inc_hun, inc_ten, inc_one;
    char ans;

    do
    {

        std::cout << "*************************************\n"
                  << "         BROKEN OVEN DIAL(1,4,7)     \n"
                  << "       (does not handle decimals)    \n"
                  << "*************************************\n\n";

        std::cout << "Enter the temperature for your recipe(0-999 degrees)\n->";
        std::cin >> temp;

        hun = temp / 100;
        yten = temp % 100;
        ten = yten / 10;
        one = temp % 10;

        if ((temp <= 999) && (temp > 0))
        {
            if ((hun != 1 && hun != 4 && hun != 7))
            {
                if (ten != 1 && ten != 4 && ten != 7)
                {
                    if (one != 1 && one != 4 && one != 7)
                    {
                        std::cout << "The Temperature can be input on the Broken dial" << std::endl;
                        std::cout << "Desired Temperature: " << temp << std::endl;
                    }
                }
            }
            else if (hun == 1 || hun == 4 || hun == 7)//errors starting with hun
            {
                dec_hun = hun - 1;
                inc_hun = hun + 1;
                std::cout << "Dec Hundredth: " << dec_hun << std::endl;
                std::cout << "Inc Hundredth: " << inc_hun << std::endl; 
                std::cout << "Broken 100\n";
                if (ten == 1 || ten == 4 || ten == 7)
                {
                    std::cout << "Broken 10\n";
                    if (one == 1 || one == 4 || one == 7)
                    {
                        std::cout << "Broken 1\n";
                    }
                }
            }
            if ((hun != 1 && hun != 4 && hun != 7))//hun is correct but ten is wrong
            {
                if (ten == 1 || ten == 4 || ten == 7)
                {
                    std::cout << "Broken 10\n";
                    if (one == 1 || one == 4 || one == 7)
                    {
                        std::cout << "Broken 1\n";
                    }
                }
                if (ten != 1 && ten != 4 && ten != 7)//ten is correct but one is wrong
                {
                    if (one == 1 || one == 4 || one == 7)
                    {
                        std::cout << "Broken 1\n";
                    }
                }
            }
        }
        else
        {
            std::cout << "\nINVALID INPUT\n"
                      << "Please enter an input within the given range\n"
                      << "RESTART the app\n";
        }

        std::cout << "Press 'R' to restart\n";
        std::cin >> ans;
    } while (ans == 'r' || ans == 'R');
}