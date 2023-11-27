#include <iostream>

int main()
{
    char ans;

    do
    {
        int human = 0, computer = 0, tpicks = 23;
        int tpcnt = tpicks;
        bool hscore, cscore;

        std::cout << "***********************************\n"
                  << "        23- A TWO PLAYER GAME      \n"
                  << "***********************************\n\n";

        std::cout << "=============[Game Details + Rules]=================\n";
        std::cout << "There are 23 toothpicks given at the beginning\n"
                  << "Player1 has the option to withdraw either 1, 2, or 3\n"
                  << "and no more than that out of the whole at a turn\n"
                  << "Player2 also has the same options at a a turn\n"
                  << "The PLAYER to withdraw the LAST toothpick loses\n"
                  << "================GOOD LUCK============================\n";

        do
        {
            do
            {
                std::cout << "\nPlease Enter how many toothpicks you'd like to withdraw(1-3)\n->";
                std::cin >> human;
            } while (human < 1 || human > 3);
            std::cout << "Human Choice: " << human << std::endl;
            if (tpcnt == 1 || tpcnt == 0)
            {
                if (tpcnt - human == 1) // true = win, false = lose
                {
                    hscore = true;
                    cscore = false;
                }
                else if (tpcnt - human == 0)
                {
                    hscore = false;
                    cscore = true;
                }
            }
            tpcnt -= human;

            if (tpcnt > 4)
                computer = 4 - human;

            else if (tpcnt > 1 && tpcnt < 5)
            {
                for (int i = 1; i < tpcnt; i++)
                    computer = i;
            }
            else if (tpcnt == 1)
            {
                computer = 1;
                cscore = false;
            }

            std::cout << "Computer Choice: " << computer << std::endl;
            if (tpcnt == 1 || tpcnt == 0)
            {
                if (tpcnt - computer == 1)
                {
                    cscore = true;
                    hscore = false;
                }
                else if (tpcnt - computer == 0)
                {
                    cscore = false;
                    hscore = true;
                }
            }
            tpcnt -= computer;

            if (tpcnt > 0)
                std::cout << "Remaining Toothpicks: " << tpcnt << std::endl;

            if (tpcnt == 1 || tpcnt == 0)
            {
                std::cout << "\n================RESULTS===============" << std::endl;
                if (cscore == true || hscore == false)
                    std::cout << "COMPUTER WINS" << std::endl;
                else if (cscore == false || hscore == true)
                    std::cout << "YOU WIN" << std::endl;
            }

        } while (tpcnt > 1);

        std::cout << "THANK YOU FOR PLAYING :)\n\n"
                  << "Press 'R' to Replay\n"
                  << "Press any other key to exit\n->";
        std::cin >> ans;
        std::cout << '\n'
                  << std::endl;
    } while (ans == 'r' || ans == 'R');
}