#include <iostream>

/**
 * Desc: Converts height in feet and inches to centimetres
 * 
 * main: does the description stated above
 * 
 * @feet = holds input data for length in feet
 * @inches = holds input data for length in inches
 * @centimetre = stores the converted length
 * 
 * return: (0) Always success.
*/

int main()
{
    int feet, inches;
    double centimetre;

    //store temporary conversions
    double c_feet = feet, c_inches = inches;

    //conversion factors 1ft = 30.48cm and 1" = 2.54cm.
    const double CONV_FEET = 30.48, CONV_INCHES = 2.54;

    std::cout << "\n***********************************\n"
              << " CONVERT LENGTH IN FT AND '' TO CM   \n"
              << "***********************************\n\n";

    //getting input
    std::cout << "Enter the Length(whole numbers) in:\nFeet: ";
    std::cin >> feet;
    std::cout << "Inches: ";
    std::cin >> inches;

    //conversion.
    c_feet = feet * CONV_FEET;
    c_inches = inches * CONV_INCHES;

    centimetre = c_feet + c_inches;

    if ((centimetre - (static_cast <int> (centimetre)) >= 0.1) && ((centimetre - (static_cast <int> (centimetre)) < 0.5)))
    {
        //rounding down
        centimetre = static_cast <int> (centimetre);
    }
    else{
        //rounding up
        centimetre = static_cast <int> (centimetre += 1);
    }

    std::cout << '\n' << feet << " Feet and " << inches << " inch(es) = "
              << centimetre << " centimetre(s)\n" << std::endl;


    return (0);
}