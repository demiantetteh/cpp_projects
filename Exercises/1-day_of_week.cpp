#include <iostream>

/**
 * Description: This program checks the days
 *          of the week via number inputs
 * main- Entry point
 *
 * Return: Always 0(success)
 */

int main()
{
    int day;

    std::cout << "Enter the day (1-7)\n";
    std::cin >> day;

    switch(day)
    {
        case 1:
            std::cout << "It's Monday, a happy day for fruitful workers\n";
            break;
        case 2:
            std::cout << "It's Tuesday, there are still more days to go, stay work-ish\n";
             break;
        case 3:
            std::cout << "It's Wednesday, midweek, you've done well by coming this far\n";
             break;
        case 4:
            std::cout << "It's Thursday, :):):):D\n";
             break;
        case 5:
            std::cout << "It's Friday, TGIF\n";
             break;
        case 6:
            std::cout << "It's Saturday, remember to do your laundry and have a good day rest\n";
             break;
        case 7:
            std::cout << "It's Sunday, remember to go to church, and pray for a better week\n";
             break;
        default:
            std::cout << "Enter a valid number (1-7)\n";
             break;
    }
    return (0);
}
