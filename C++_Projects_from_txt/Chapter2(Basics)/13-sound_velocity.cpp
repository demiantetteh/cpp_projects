#include <iostream>

int main()
{
    double temp1,temp2;
    double velocity;

    std::cout << "***************************************************\n"
              << "  Velocity of Sound at Range of Given Temperature  \n"
              << "***************************************************\n\n";

    std::cout << "Please Enter a range of temperature in Celsius\n"
              << "Beginning temperature range: ";
    std::cin >> temp1;
    std::cout << "Ending temperature range: ";
    std::cin >> temp2;
    std::cout << '\n';

    if(temp1 < temp2)
    {
        while(temp1 <= temp2)
        {
            velocity = 331.3 * 0.61 * temp1;

            std::cout << "At " << temp1 << " degrees Celsius the velocity of sound is "
                      << velocity << " m/s \n";
            temp1++;
        }
    }
    //takes care of an inverted order
    else if(temp2 < temp1)
    {
      while(temp2 <= temp1)
        {
            velocity = 331.3 * 0.61 * temp1;

            std::cout << "At " << temp1 << " degrees Celsius the velocity of sound is "
                      << velocity << " m/s \n";
            temp1--;
        }
    }
    return (0);
}