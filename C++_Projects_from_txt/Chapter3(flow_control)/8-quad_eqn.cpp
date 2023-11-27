#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    double x1, x2, disc;
    char ans;
    bool ismax;

    do{
        ismax = true;
        std::cout << "****************************************\n"
                  << "           QUADRATIC EQUATIONS          \n"
                  << "****************************************\n\n";

        std::cout << "-----------------------------------------\n";
        std::cout << "Quadratic Equations are of the form\n"
                  << "\na(x*x) + b(x) + c = 0\n"
                  << "You should know this if you've studied\ncomplex numbers\n";
        std::cout << "-----------------------------------------\n";

        std::cout << "\nEnter the value of the first constant(a)\n->a: ";
        std::cin >> a;
        std::cout << "Enter the value of the second constant(b)\n->b: ";
        std::cin >> b;
        std::cout << "Enter the value of the first constant(c)\n->c: ";
        std::cin >> c;
        std::cout << "\n---------------------------------------\n";
        std::cout << "Your equation is " << a << "(x*x) + " << b << "x + "
                  << c << " = 0\n" << std::endl;
        if(a > 0)
            ismax = false;
        else if(a < 0)
            ismax = true;

        //math
        disc = (b * b) - (4 * a * c);
        x1 = ((-1 * b) + sqrt(disc)) / (2 * a);
        x2 = ((-1 * b) - sqrt(disc)) / (2 * a);

        std::cout << "*******ANSWERS*******\n\n";
        if(isnanf(x1) || isnanf(x2))
            std::cout << "Roots of the equation are complex numbers(i)\n";
        else
            std::cout << "Roots of the equation: " << x1 << " or " << x2 << std::endl;
        if(disc == 0)
            std::cout << "The Nature of the root has a single real root\n";
        else if(disc > 0)
            std::cout << "The Nature of the roots have  two real roots\n";
        else if(disc < 0)
            std::cout << "The Nature of the roots have two complex roots\n";
        if(ismax == true)
            std::cout << "The Function has a maximum value\n";
        else if(ismax == false)
            std::cout << "The Function has a minimum value\n";

        std::cout << "\n\nDo you wish to use the calculator again?\n"
                  << "'Y' for YES\n"
                  << "ANY OTHER KEY for NO\nAns: ";
        std::cin >>ans;

    }while(ans == 'Y' || ans == 'y');

    return (0);
}