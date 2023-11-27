#include <iostream>
#include <cmath>

double calcH(double opp, double adj);
/**
 * calcH: calculates the hypotenuse of a triangle
 * @opp: opposite side
 * @adj: adjacent side
 * return: hypotenuse of the triangle
*/

double calcPerimeter(double opp, double adj, double hyp);
/**
 * calcPerimeter: Calculates the perimeter of the triangle
 * @opp: base length
 * @adj: perpendicular length
 * @hyp: hypotenuse
 * return: Perimeter of the triangle
*/
int main()
{
    double adj, opp, hyp, per;

    std::cout << "*************************************\n"
              << "HYPOTENUSE & PERIMETER OF A TRIANGLE \n"
              << "*************************************\n\n";
    
    std::cout << "Enter the Details of the Triangle in cm\n";
    std::cout << "Length of the Base: ";
    std::cin >> adj;
    std::cout << "Perpendicular Side: ";
    std::cin >> opp;

    hyp = calcH(opp, adj);
    per = calcPerimeter(opp, adj, hyp);

    std::cout << "\nThe Hypotenuse of your Triangle is: " << hyp << std::endl;
    std::cout << "The Perimeter  of your Triangle is: " << per << std::endl;

    return (0);
}
double calcH(double opp, double adj)
{
    double hyp;
    
    hyp = sqrt(pow(opp, 2) + pow(adj, 2));

    return (hyp);
}
double calcPerimeter(double opp, double adj, double hyp)
{
    double per;

    per = opp + adj + hyp;

    return (per);
}