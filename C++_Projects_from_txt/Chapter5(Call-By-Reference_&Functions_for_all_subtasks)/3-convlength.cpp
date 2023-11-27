#include <iostream>
#include <cmath>
const double INCHES_TO_FEET = 12;
const double FEET_TO_INCHES = 0.3048;

void getLengthInput(double &length1, double &length2, int input);
/**
 * getLengthInput: Gets input for the desired length
 * @length1: The greater unit of length
 * @length2: The smaller unit of length
 * @input: To differentiate lengths
 */

double convFTtoM(double feet, double inches);
/**
 * convFTtoM: Converts from ft & inch to m & cm
 * @feet: length in feet
 * @inches: length in inches
 */

double convMtoFt(double metres, double cm);
/**
 * convMtoFt: Converts from m & cm to ft & in
 * @metres: length in metres
 * @cm: Length in centimetres
 */

void displayCovertedLength(double conv, int input);
/**
 * displayCovertedLength: Chooses required unit and displays conversion
 * @conv: Converted length
 * @input: Input for desired length
 */

int main()
{
    char ans;
    do
    {
        double metres, cm, feet, inches, conv;
        int input;

        std::cout << '\n';
        std::cout << "*******************************\n"
                  << "         LENGTH CONVERTER      \n"
                  << "*******************************\n\n";

        std::cout << "Enter the # for the length you wish to convert to\n"
                  << "1)Feet & inches -> Metres & centimetres\n"
                  << "2)Metres & centimetres -> Feet & inches\n=>";
        std::cin >> input;
        std::cout << '\n';
        if (input == 1)
        {
            getLengthInput(feet, inches, input);
            while (feet < 0 || inches < 0)
            {
                std::cout << "Length CANNOT be negative\n"
                          << "Please Enter a valid length\n";
                getLengthInput(feet, inches, input);
            }
            conv = convFTtoM(feet, inches);
            displayCovertedLength(conv, input);
        }
        else if (input == 2)
        {
            getLengthInput(metres, cm, input);
            while (metres < 0 || cm < 0)
            {
                std::cout << "Length CANNOT be negative\n"
                          << "Please Enter a valid length\n";
                getLengthInput(metres, cm, input);
            }
            conv = convMtoFt(metres, cm);
            displayCovertedLength(conv, input);
        }
        else
        {
            std::cout << "Incorrect Input\n"
                      << "Please Restart the App\n";
        }
        std::cout << "\nPress 'R' to Restart the app\n"
                  << "Press any other to EXIT\n=>";
        std::cin >> ans;
    } while (ans == 'r' || ans == 'R');
    std::cout << "\nThank You for using the App :)\n";
}
void getLengthInput(double &length1, double &length2, int input)
{
    std::cout << "\t[LENGTH DETAILS]\n";
    if (input == 1)
    {
        std::cout << "Feet: ";
        std::cin >> length1;
        std::cout << "Inches: ";
        std::cin >> length2;
    }
    else
    {
        std::cout << "Metres: ";
        std::cin >> length1;
        std::cout << "Centimetres: ";
        std::cin >> length2;
    }
}
double convFTtoM(double feet, double inches)
{
    // conv is in METRES
    double conv = ((inches / INCHES_TO_FEET) * FEET_TO_INCHES) + (feet * FEET_TO_INCHES);
    return (conv);
}
double convMtoFt(double metres, double cm)
{
    // conv is in FEET
    double conv = (metres * (1 / FEET_TO_INCHES)) + (cm * 0.01 * (1 / FEET_TO_INCHES));
    return (conv);
}
void displayCovertedLength(double conv, int input)
{
    std::cout << std::endl;
    if (input == 1)
    {
        int metres;
        double cm;

        metres = conv;
        cm = (conv - metres) * 100;
        std::cout << "[CONVERTED LENGTH EQUIVALENT]\n";
        std::cout << "Metres: " << metres << std::endl;
        std::cout << "Cm: " << cm << std::endl;
    }
    else if (input == 2)
    {
        int feet;
        double inches;

        feet = conv;
        inches = (conv - feet) * 12;
        std::cout << "[CONVERTED LENGTH EQUIVALENT]\n";
        std::cout << "Feet: " << feet << std::endl;
        std::cout << "Inches: " << inches << std::endl;
    }
}