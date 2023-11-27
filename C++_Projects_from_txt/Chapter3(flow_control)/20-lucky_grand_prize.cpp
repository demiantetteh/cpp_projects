#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    char res;
    do
    {
        std::string prize1, prize2, prize3;
        int door1, door2, door3, choice, hostreveal = 0;
        char ans;

        std::cout << "************************************************\n"
                  << "              MONTY HALL GAME SHOW              \n"
                  << "************************************************\n";

        srand(time(0));

        door1 = (rand() % 3) + 1;

        do
        {
            door2 = (rand() % 3) + 1;
        } while (door2 == door1);

        do
        {
            door3 = (rand() % 3) + 1;
        } while (door3 == door1 || door3 == door2);

        switch (door1)
        {
        case 1:
            prize1 = "Grand Prize door -> Brand New Car\n";
            break;
        case 2:
            prize1 = "Consolation door -> Cinema Tickets\n";
            break;
        case 3:
            prize1 = "Consolation door -> 5-Star Hotel Reservation\n";
            break;
        }
        switch (door2)
        {
        case 1:
            prize2 = "Grand prize door -> Brand New Car\n";
            break;
        case 2:
            prize2 = "Consolation door -> Cinema Tickets\n";
            break;
        case 3:
            prize2 = "Consolation door -> 5-Star Hotel Reservation\n";
            break;
        }
        switch (door3)
        {
        case 1:
            prize3 = "Grand prize door -> Brand New Car\n";
            break;
        case 2:
            prize3 = "Consolation door -> Cinema Tickets\n";
            break;
        case 3:
            prize3 = "Consolation door -> 5-Star Hotel Reservation\n";
            break;
        }

        std::cout << "\nChoose Only one of the 3 Doors\n";
        std::cout << " ______    ______    ______\n";
        std::cout << "|      |  |      |  |      |\n";
        std::cout << "|   1  |  |   2  |  |   3  |\n";
        std::cout << "|______|  |______|  |______|\n\n";

        do
        {
            std::cout << "\nDOOR: ";
            std::cin >> choice;
        } while (choice < 1 || choice > 3);

        std::cout << "***********************************************\n";
        std::cout << "THE HOST WILL NOW REVEAL ONE OTHER DOOR\n";
        std::cout << "TO GIVE YOU A CHANCE TO CHANGE YOUR CHOICE\n";
        std::cout << "***********************************************\n";
        std::cout << "\n\t-------OTHER DOOR REVEAL---------\n";
        switch (choice)
        {
        case 1: // picked door1, lets reveal either door 2 or 3
            hostreveal = (rand() % 2) + 1;

            if (hostreveal == 1)
                std::cout << "Door2 is the " << prize2 << std::endl;
            else if (hostreveal == 2)
                std::cout << "Door3 is the " << prize3 << std::endl;

            break;

        case 2: // picked door2, lets reveal either door 1 or 3
            hostreveal = (rand() % 2) + 1;
            if (hostreveal == 1)
                std::cout << "Door1 is the " << prize1 << std::endl;
            else if (hostreveal == 2)
                std::cout << "Door3 is the " << prize3 << std::endl;

            break;

        case 3: // picked door3, lets reveal either door 1 or 2
            hostreveal = (rand() % 2) + 1;
            if (hostreveal == 1)
                std::cout << "Door1 is the " << prize1 << std::endl;
            else if (hostreveal == 2)
                std::cout << "Door2 is the " << prize2 << std::endl;

            break;
        }

        do
        {
            std::cout << "\nDo you want to change your choice\n"
                      << "(Y)es or (N)o\n->";
            std::cin >> ans;
        } while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N');

        std::cout << "****************************************************\n";
        if (ans == 'y' || ans == 'Y')
            std::cout << "You chose To Change your Choice\n";
        else if (ans == 'n' || ans == 'N')
            std::cout << "You decided to stick with your original Choice\n";
        std::cout << "****************************************************\n";

        if ((ans == 'y' || ans == 'Y') && (hostreveal == 1 || hostreveal == 2))
        {
            if (choice == 1)
            {
                if (hostreveal == 1)
                    choice = 3;
                else if (hostreveal == 2)
                    choice = 2;
            }
            else if (choice == 2)
            {
                if (hostreveal == 1)
                    choice = 3;
                else if (hostreveal == 2)
                    choice = 1;
            }
            else if (choice == 3)
            {
                if (hostreveal == 1)
                    choice = 2;
                else if (hostreveal == 2)
                    choice = 1;
            }

            std::cout << "\nThe other remaining door is now your primary CHOICE\n";
        }

        std::cout << "==============================================\n";
        switch (choice)
        {
        case 1:
            if (door1 == 1)
            {
                std::cout << "CONGRATULATIONS!!! :)))\n"
                          << "You won the GRAND PRIZE\n";
            }
            else
            {
                std::cout << "YOU WON A CONSOLATION PRIZE!\n"
                          << "Better Luck Next time\n";
            }
            std::cout << "Door1 is the " << prize1 << std::endl;
            break;
        case 2:
            if (door2 == 1)
            {
                std::cout << "CONGRATULATIONS!!! :)))\n"
                          << "You won the GRAND PRIZE\n";
            }
            else
            {
                std::cout << "YOU WON A CONSOLATION PRIZE!\n"
                          << "Better Luck Next time\n";
            }
            std::cout << "Door2 is the " << prize2 << std::endl;
            break;
        case 3:
            if (door3 == 1)
            {
                std::cout << "CONGRATULATIONS!!! :)))\n"
                          << "You won the GRAND PRIZE\n";
            }
            else
            {
                std::cout << "YOU WON A CONSOLATION PRIZE!\n"
                          << "Better Luck Next time\n";
            }
            std::cout << "Door3 is the " << prize3 << std::endl;
            break;
        }
        std::cout << "=================================================\n";

        std::cout << "\nPress 'R' to Restart the Game\n";
        std::cout << "Press any other key to EXIT\n->";
        std::cin >> res;
        std::cout << '\n';
    }while(res == 'r' || res == 'R');

    return (0);
}