#include <iostream>

int main()
{
    int days, second, next, sub;
    int first = 0;
    char ans;

    /**
     * Assume that the population size is the same for 4 days
     * and then increases every fifth day.
     */
    
    do{
        std::cout << "************************************************\n"
                  << "GREEN CRUD POPULATION(fib series implementation)\n"
                  << "************************************************\n\n";

        std::cout << "Enter the size(population) of the Green Crud\n->";
        std::cin >> next;
        std::cout << "Enter #days for expected growth\n->";
        std::cin >> days;

        if (days >= 5 && next > 0)
        {
            std::cout << '\n';
            for (int i = 0; i <= days; i += 5)
            {
                second = first + next;
                if (i % 5 == 0)
                {
                    std::cout << "Day: " << i << "\t\tPopulation: " << next << std::endl;
                    first = next;
                    next = second;
                }
            }
            if ((days - second) % 5 != 0)
                std::cout << "Day: " << days << "\t\tPopulation: " << first << std::endl;
        }
        else if ((days <= 4 && days >= 0) && next > 0)
            std::cout << "Day: " << days << "\t\tPopulation: " << next << std::endl;
        else
        {
            std::cout << "\nINVALID INPUT" << std::endl;
            std::cout << "PLEASE ENTER A VALID INPUT" << std::endl;
            std::cout << "PLEASE RESTART THE APP" << std::endl;
        }

        std::cout << "\nPress 'R' to RESTART the app\n";
        std::cout << "Press ANY OTHER KEY to EXIT\n";
        std::cin >> ans;
        std::cout << '\n';
    }while(ans == 'r' || ans == 'R');
}