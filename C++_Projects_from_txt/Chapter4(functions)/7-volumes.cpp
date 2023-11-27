#include <iostream>
#include <cmath>

const double PI = 3.14;

double calcVolume(double radius);
/**
 * calcVolume: computes volume of a sphere
 * @radius: radius of sphere
 * return: Volume of Sphere
 */
double calcVolume(double radius, double height);
/**
 * calcVolume: computes volume of a cylinder
 * @radius: radius of cylinder
 * @height: height of cylinder
 * return: Volume of cylinder
 */
double calcVolume(double length, double width, double height);
/**
 * calcVolume; computes volume of cuboid/cubes
 * @length: length of cuboid/cube
 * @width: width of cuboid/cube
 * @height: height of cuboid/cube
 * return: volume of cuboid/cube
 */

int main()
{
    char ans;

    do
    {
        int shape;
        double volume, length, width, height, radius;
            std::cout << "**********************************\n"
                      << "      VOLUMES OF SOLID SHAPES     \n"
                      << "(sphere, cylinder, cubes, cuboids)\n"
                      << "**********************************\n\n";

        std::cout << "Enter corresponding #number of your solid shape\n\n"
                  << "1)Sphere\t3)Cylinder\n"
                  << "2)Cuboid\t4)Cube\n=>";
        std::cin >> shape;
        std::cout << '\n';

        if (shape == 1)
        {
            std::cout << "------SPHERE------\n";
            std::cout << "Enter the radius(cm): ";
            std::cin >> radius;

            volume = calcVolume(radius);
            std::cout << "\nVolume of the Sphere is: " << volume << " cm^3\n";
        }
        else if (shape == 2)
        {
            std::cout << "-----CUBOID------\n"
                      <<"Enter the length(cm): ";
            std::cin >> length;
            std::cout << "Enter the width(cm): ";
            std::cin >> width;
            std::cout << "Enter the height(cm): ";
            std::cin >> height;

            volume = calcVolume(length, width, height);
            std::cout << "\nVolume of the Cuboid is: " << volume << " cm^3\n";
        }
        else if (shape == 3)
        {
            std::cout << "-------CYLINDER------\n";
            std::cout << "Enter the radius(cm): ";
            std::cin >> radius;
            std::cout << "Enter the height(cm): ";
            std::cin >> height;

            volume = calcVolume(radius, height);
            std::cout << "\nVolume of the Cylinder is: " << volume << " cm^3\n";
        }
        else if (shape == 4)
        {
            std::cout << "-----CUBE-----\n";
            std::cout << "Enter the length(cm): ";
            std::cin >> length;

            volume = calcVolume(length, length, length);
            std::cout << "\nVolume of the Cube is: " << volume << " cm^3\n";
        }
        else{
            std::cout << "\nINVALID INPUT\n";
            std::cout << "Restart the App\n";
        }

        std::cout << "\nPress 'R' to RESTART the app\n"
                 << "Press any other key to EXIT\n=>";
        std::cin >> ans;
        std::cout << '\n';


    } while (ans == 'r' || ans == 'R');

    return (0);
}
double calcVolume(double radius)
{
    return ((4/3.0 ) * PI * pow(radius, 3));
}
double calcVolume(double radius, double height)
{
    return (PI * pow(radius, 2) * height);
}
double calcVolume(double length, double width, double height)
{
    return (length * width * height);
}