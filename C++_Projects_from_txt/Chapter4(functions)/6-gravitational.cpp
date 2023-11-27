#include <iostream>

double gravity(double mass1, double mass2, double distance);
/**
 * gravity: Computes gravitational force between two masses
 * @mass1: Mass of Object1
 * @mass2: Mass of Object2
 * @distance: Seperation between @mass1 & @mass2
*/

const double G = 6.7 * 10e-11; //units = N * m^2 * kg^-2

int main()
{
    double mass1, mass2, distance, force;

    std::cout << "**********************************\n"
              << "GRAVITATIONAL FORCE OF ATTRACTION \n"
              << "**********************************\n\n";
    
    std::cout << "Enter the Mass of the first object(kg): ";
    std::cin >> mass1;
    std::cout << "Enter the Mass of the second object(kg): ";
    std::cin >> mass2;
    std::cout << "Enter the Distance between the two Masses(metres): ";
    std::cin >> distance;

    if(mass1 > 0 && mass2 > 0 && distance)
    {
        force = gravity(mass1, mass2, distance);
        std::cout << "\nGravity between the two masses is: " << force << " Newtons\n";
    }
    else{
        std::cout << "INVALID INPUT\n"
                  << "RESTART THE APP\n";
    }

    return (0);
}
double gravity(double mass1, double mass2, double distance)
{
    double Force = (G * mass1 * mass2) / distance * distance;

    return (Force);
}