#include <iostream>
#include <cmath>

double calcH(double opp, double adj);
/**
 * calcH: calculates the hypotenuse of a triangle
 * @opp: takes the opposite side
 * @adj: takes the adjacent side
 * return: the hypotenuse of the triangle
*/

int main()
{
    double adj, opp, hyp;

    std::cout << "***********************************\n"
              << "      HYPOTENUSE OF A TRIANGLE     \n"
              << "***********************************\n\n";
    
    std::cout << "Enter the Details of the Triangle in cm\n";
    std::cout << "Length of the Base: ";
    std::cin >> adj;
    std::cout << "Perpendicular Side: ";
    std::cin >> opp;

    hyp = calcH(opp, adj);

    std::cout << "\nThe Hypotenuse of your Triangle is: " << hyp << std::endl;

    return (0);
}
double calcH(double opp, double adj)
{
    double hyp;
    
    hyp = sqrt(pow(opp, 2) + pow(adj, 2));

    return (hyp);
}