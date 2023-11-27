/**
 * Desc: This programs takes three inputs(lengths of a triangle)
 *       and determines what type of triangle the user has based on the input
*/

#include <iostream>

int main()
{
    double hyp, opp, adj;

    std::cout << "\nEnter the length(cm) of the first side of the triangle: ";
    std::cin >> opp;

    std::cout << "Enter the length(cm) of the second side of the triangle: ";
    std::cin >> adj;

    std::cout << "Enter the length(cm) of the third side of the triangle: ";
    std::cin >> hyp;

    bool validTriangle = ((hyp + opp) > adj) && ((hyp + adj) > opp) && ((opp + adj) > hyp);

    if((hyp <= 0) || (opp <= 0) || (adj <= 0))
    {
        std::cout << "You have entered and Invalid Length for at least one side\n"
                  << "Please Restart the program and ENTER A VALID LENGTH\n";
        
        return (0);
    }

    else if(validTriangle == false)
    {
        std::cout << "\nThis is not a Triangle\n"
                  << "RESTART THE PROGRAM AND ENTER VALID SIDES\n";
        return (0);
    }

    if(validTriangle == true)
    {
        std::cout << "\n****RESULTS FOR TRIANGLE ENTERED**********\n";
        bool isosceles = (hyp == opp) || (hyp == adj) || (adj == opp);
        bool equilateral = (hyp == opp) && (opp == adj) && (adj == hyp);
        bool scalene = (hyp != opp) && (hyp != adj) && (adj != opp);
        
        //creating new variables to use for the boolean variable to check
        // for right angles
        double expHyp, expOpp, expAdj;
        expHyp = hyp * hyp;
        expAdj = adj * adj;
        expOpp = opp * opp;

        bool rightTriangle = ((expHyp == expAdj + expOpp) || (expAdj == expHyp + expOpp) || (expOpp == expAdj + expHyp));


        if(scalene == true)
        {
            if(rightTriangle == true)
                std::cout << "This is a Scalene and Right Triangle\n";
            else
                std::cout << "This is a Scalene Triangle\n";
            
        }
        else if(equilateral == true)
        {
            if(rightTriangle == true)
                std::cout << "This is an Equilateral and Right Triangle\n";
            else
                std::cout << "This is an Equilateral Triangle\n";
        }
        else if(isosceles == true)
        {
            if(rightTriangle == true)
                std::cout << "This is an Isosceles and Right Triangle\n";
            else
                std::cout << "This is an Isosceles Triangle\n";
        }
    }
    
    return (0);
}