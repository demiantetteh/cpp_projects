#include <iostream>
#include <cmath>

int main()
{
    const double PI = 3.14159;
    double volume, radius, height, gal;

    std::cout << "**********************************\n"
              << "     GALLONS OF WATER CALCULATOR  \n"
              << "**********************************\n\n";

   std::cout << "Many private water wells produce only 1 or 2 gallons of water per min-\n"
             << "ute. One way to avoid running out of water with these low-yield wells\n"
             << "is to use a holding tank.\n\n"
             << "A family of FOUR will use about 250 gallons of water per day.\n\n\n";


   std::cout << "DETAILS OF THE WELL\n\n";

   std::cout << "1. Please enter the depth of the well in feet(ft): ";
   std::cin >> height;
   std::cout << "2. Please enter the radius of the well in inches(''): ";
   std::cin >> radius;
   std::cout << '\n' << std::endl;

   radius /= 12;

   volume = PI * (radius * radius) * height;
   std::cout << "1 cubic foot = 7.48 gallons of water\n";

   gal = volume * 7.48;
   gal = ceil(gal);

   std::cout << "The HEIGHT of the well is: " << height << " feet\n"
             << "The RADIUS of the well is: " << radius << " inches\n"
             << "The VOLUME of the well is: " << volume << " cubic feet\n"
             << "\nThe Well can hold: " << gal << " gallons of water\n";

    if(gal > 250)
    {
        std::cout << "Gallons of water is sufficient for the Family\n"
                  << "No need to install a separate holding tank\n";

    }
    else{
        std::cout << "Gallons of water is NOT sufficient for the Family\n"
                  << "Please INSTALL a separate holding tank\n";

    }

   return(0);

}
