#include <iostream>
#include <cmath>

// Desc: This program prompts a user to enter the lengths of three sides, checks if
//       they form a triangle, and outputs if it is an isosceles,
//       equilateral, scalene, or right triangle
// Outputs: Perimeter and Area of triangle
// Inputs: Lengths 1, 2, 3.

bool isTriangle(double a, double b, double c);
/**
 * Desc: Checks if the lengths entered form a triangle
 * Returns: true if they form a triangle
 *          false if they don't
 */
bool isIsosceles(double a, double b, double c);
/**
 * Desc: Checks if the triangle is Isosceles
 * Returns: true if it is
 *          false if not
 */
bool isEquilateral(double a, double b, double c);
/**
 * Desc: Checks if the triangle is Equilateral
 * Returns: true if it is
 *          false if not
 */
bool isScalene(double a, double b, double c);
/**
 * Desc: Checks if the triangle is Scalene
 * Returns: true if it is
 *          false if not.
 */
bool isRight(double a, double b, double c);
/**
 * Desc: Checks if the triangle is a Right Triangle
 * Returns: true if it is
 *          false if not
 */
double perimeter(double a, double b, double c);
/**
 * Desc: Calculates the perimeter of the triangle
 * Returns: The perimeter of the triangle
 */
double area(double a, double b, double c);
/**
 * Desc: Calculates the area of the triangle
 * Returns: The area of the triangle
 */
void perimeterArea(double a, double b, double c, double &Area, double &Perimeter);
/**
 * Desc: calls area(double a, double b, double c) and perimeter(double a, double b, double c)
 * Returns: NOTHING
 */

int main()
{
    using namespace std;

    char ans;
    double a, b, c;
    double Area, Perimeter;

    do
    {

        cout << "Enter the three sides of the triangle: ";
        cin >> a >> b >> c;

        bool valid, isosceles, equilateral, scalene, right;

        valid = isTriangle(a, b, c);

        if (valid == true)
        {
            isosceles = isIsosceles(a, b, c);
            equilateral = isEquilateral(a, b, c);
            scalene = isScalene(a, b, c);
            right = isRight(a, b, c);

            if (isosceles == true)
            {
                if (right == true)
                {
                    cout << "This is an Isosceles and Right Triangle\n";
                }
                else{
                    cout << "This is an Isosceles Triangle\n";
                }
            }
            else if (equilateral == true)
            {
                if (right == true)
                {
                    cout << "This is an Equilateral and Right Triangle\n";
                }
                else{
                    cout << "This is an Equilateral Triangle\n";
                }
            }
            else if (scalene == true)
            {
                if (right == true)
                {
                    cout << "This is a Scalene and Right Triangle\n";
                }
                else{
                    cout << "This is a Scalene Triangle\n";
                }
            }

            perimeterArea(a, b, c, Area, Perimeter);

            cout << "It's perimeter is " << Perimeter
                      << "\nIt's area is " << Area << "\n";  
        }
        else
        {
            cout << "\nThis is not a triangle\n";
        }

        cout << "\nRun Again (Y/N) ? ";
        cin >> ans;
        cout << '\n';
    } while (ans == 'y' || ans == 'Y');

    cout << "Good bye!\n";

    return (0);
}

bool isTriangle(double a, double b, double c)
{
    bool tri = (((a + b) > c) && ((b + c) > a) && ((c + a) > b));

    return (tri);
}
bool isIsosceles(double a, double b, double c)
{
    bool ice1, ice2, ice3;
    // conditions to check for isosceles triangle broken down
    //  into 3 parts and stored into the ice1, ice2, ice3.

    ice1 = ((a == b) && ((a != c) && (b != c)));
    ice2 = ((b == c) && ((b != a) && (c != a)));
    ice3 = ((c == a) && ((c != b) && (a != b)));

    return (ice1 || ice2 || ice3);
}
bool isEquilateral(double a, double b, double c)
{
    bool equi = (a == b) && (b == c) && (a == c);

    return (equi);
}
bool isScalene(double a, double b, double c)
{
    bool scal = (a != b) && (b != c) && (a != c);

    return (scal);
}
bool isRight(double a, double b, double c)
{
    bool right = ((pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(b, 2)) || (pow(c, 2) == pow(a, 2) + pow(b, 2)));

    return (right);
}
double perimeter(double a, double b, double c)
{
    return (a + b + c);
}
double area(double a, double b, double c)
{
    double s, x;
    // x = will hold the area of the triangle;

    s = (a + b + c) / 2.0;

    x = sqrt((s * (s - a) * (s - b) * (s - c)));

    return (x);
}
void perimeterArea(double a, double b, double c, double &Area, double &Perimeter)
{
    Area = area(a, b, c);
    Perimeter = perimeter(a, b, c);
}