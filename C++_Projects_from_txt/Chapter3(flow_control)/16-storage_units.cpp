#include <iostream>

int main()
{
    double size, Gb, Mb, Kb, b;
    char unit, ans;

    do
    {
        std::cout << "*********************************\n"
                  << "        Gb -> Mb -> Kb -> b      \n"
                  << "*********************************\n";

        std::cout << "\n     UNITS    \n"
                  << "'G' for Gigabyte\n"
                  << "'M' for Megabyte\n"
                  << "'K' for Kilobyte\n\n";

        std::cout << "#Please enter the unit of the storage size: ";
        std::cin >> unit;
        std::cout << "#Please enter the storage size: ";
        std::cin >> size;
        std::cout << '\n';

        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(2);

        if (unit == 'G' || unit == 'g')
        {
            Mb = size * 1024.0;
            Kb = Mb * 1024.0;
            b = Kb * 1024.0;

            std::cout << "CONVERTED SIZES\n";
            std::cout << "Mb: \t" << Mb << " Megabytes" << std::endl;
            std::cout << "Kb: \t" << Kb << " Kilobytes" << std::endl;
            std::cout << "b: \t" << b << " Bytes" << std::endl;
        }
        else if (unit == 'M' || unit == 'm')
        {
            Kb = size * 1024.0;
            b = Kb * 1024.0;

            std::cout << "CONVERTED SIZES\n";
            std::cout << "Kb: \t" << Kb << " Kilobytes" << std::endl;
            std::cout << "b: \t" << b << " Bytes" << std::endl;
        }
        else if (unit == 'K' || unit == 'k')
        {
            b = size * 1024.0;

            std::cout << "CONVERTED SIZE\n";
            std::cout << "b: \t" << b << " Bytes" << std::endl;
        }
        else
        {
            std::cout << "INVALID INPUT\n";
            std::cout << "Please Enter an input from the given options\n";
            std::cout << "Restart the APP\n";
        }

        std::cout << "\nPress 'R' to RESTART the app\n"
                  << "Press any other key to EXIT\n";
        std::cin >> ans;
        std::cout << '\n';

    } while (ans == 'r' || ans == 'R');
    std::cout << "Thank You for using our app\n";

    return (0);
}