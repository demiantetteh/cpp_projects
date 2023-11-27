#include <iostream>

int main()
{
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

        std::cout << "Enter the temperature for your recipe (0-999 degrees)\n->";
        std::cin >> temp;

        hun = temp / 100;
        yten = temp % 100;
        ten = yten / 10;
        one = temp % 10;

        if ((temp <= 999) && (temp > 0))
        {
            if ((hun != 1 && hun != 4 && hun != 7) && (ten != 1 && ten != 4 && ten != 7) && (one != 1 && one != 4 && one != 7))
            {
                // Desired temperature can be input on the broken dial
                std::cout << "The Temperature can be input on the Broken dial" << std::endl;
                std::cout << "Desired Temperature: " << temp << std::endl;
            }
            else
            {
                // Adjust the temperature to the next largest and next smallest values without 1, 4, and 7
                // Adjust the hundreds place
                if (hun == 1 || hun == 4 || hun == 7)
                {
                    dec_hun = (hun == 1) ? 0 : ((hun == 4) ? 3 : 6);
                    inc_hun = (hun == 1) ? 2 : ((hun == 4) ? 5 : 8);
                }
                else
                {
                    dec_hun = hun;
                    inc_hun = hun;
                }

                // Adjust the tens place
                if (ten == 1 || ten == 4 || ten == 7)
                {
                    dec_ten = (ten == 1) ? 0 : ((ten == 4) ? 3 : 6);
                    inc_ten = (ten == 1) ? 2 : ((ten == 4) ? 5 : 8);
                }
                else
                {
                    dec_ten = ten;
                    inc_ten = ten;
                }

                // Adjust the ones place
                if (one == 1 || one == 4 || one == 7)
                {
                    dec_one = (one == 1) ? 0 : ((one == 4) ? 3 : 6);
                    inc_one = (one == 1) ? 2 : ((one == 4) ? 5 : 8);
                }
                else
                {
                    dec_one = one;
                    inc_one = one;
                }

                std::cout << "Next smallest temperature: " << dec_hun * 100 + dec_ten * 10 + dec_one << std::endl;
                std::cout << "Next largest temperature: " << inc_hun * 100 + inc_ten * 10 + inc_one << std::endl;
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
