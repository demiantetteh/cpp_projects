#include <iostream>
#include <cmath>

int main()
{
    double series, PI;
    int n;
    char ans; 

    do
    {
        std::cout << "*****************************\n"
                  << "       PI APPROXIMATOR       \n"
                  << "*****************************\n\n";
        //PI = 4 * [1 -1/3 + 1/5 - 1/7 + 1/9 +......+ ((-1)^n)/(2n +1)]

        series = 0;

        std::cout << "Please Enter the number of terms: ";
        std::cin >> n;

        for (int i = 0; i <= n; i++)
        {
            series += pow(-1, i) / ((2 * i) + 1);
        }

        PI = series * 4;

        std::cout << "PI: " << PI << std::endl;

        std::cout << "\nPress 'R' to restart the app\n"
                  << "Press any other key to exit\n";
        std::cin >> ans;
    } while (ans == 'r' || ans == 'R');
    return (0);
}