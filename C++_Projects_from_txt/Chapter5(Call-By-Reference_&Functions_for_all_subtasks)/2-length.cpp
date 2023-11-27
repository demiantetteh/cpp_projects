#include <iostream>
#include <cmath>

void getInput(double &feet, double &inches);
/**
 * getInput: Takes input the variables
 * @feet: Length in feet
 * @inches: Length in inches
 */
double convert(double feet, double inches);
/**
 * convert: converts lengths to m and cm
 * @feet: length in feet to be converted
 * @inches: length in inches to be converted
 * return: Total converted length
 */
void disp(double conv);
/**
 * disp: Displays converted lengths
 * @conv: Converted length
 */

int main()
{
    double conv, feet, inches;

    std::cout << "***********************************\n"
              << "LENGTH CONVERTER(ft & in -> m & cm)\n"
              << "***********************************\n\n";

    getInput(feet, inches);

    conv = convert(feet, inches);

    disp(conv);

    return (0);
}
void getInput(double &feet, double &inches)
{
    std::cout << "      HEIGHT FORMAT       \n";
    std::cout << "Example is height: 6ft 4inches\n\n";

    std::cout << "Enter the Length\n";
    std::cout << "Feet: ";
    std::cin >> feet;
    std::cout << "Inch: ";
    std::cin >> inches;
}
double convert(double feet, double inches)
{
    double conv1, conv2, conv;

    conv1 = feet * 0.3048;
    conv2 = (inches / 12.0) * 0.3048;

    conv = conv1 + conv2;

    return (conv);
}
void disp(double conv)
{
    int metres;
    int cm;

    metres = floor(conv);
    cm = (conv - metres) * 100;

    std::cout << "---[CONVERTED LENGTH]---\n";
    std::cout << "Length: " << metres << " metres and " << cm << " cm";
}