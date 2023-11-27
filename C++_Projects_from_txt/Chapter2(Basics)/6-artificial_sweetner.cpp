#include <iostream>

int main()
{
    double weight;
    char ans;
    double ld_sweet_human, d_cans, h_m_cans;

    //weight measurements in grams(mouse)
    double ld_sweet_mouse = 5;
    double m_mouse = 35;
    double cans = 14.29;
    double m_cans = 5250;

    std::cout << "**************************************************************************\n"
              << "This is an Artificial sweetner gram calculator\n"
              << "To find least sweetner needed to kill a human of a specific weight\n"
              << "**************************************************************************\n\n";


   do{

    std::cout << ">>Enter the weight(g) at which the dieter will stop dieting\n->";
    std::cin >> weight;
        //math
    ld_sweet_human = (weight/m_mouse) * 5;
    d_cans = (ld_sweet_human/ ld_sweet_mouse) * cans;
    h_m_cans = (d_cans/cans) * m_cans;

    std::cout << '\n';

    std::cout << "--------------------------------------------------------------------------------\n\n";
    std::cout << "Provided that in every can of soda pop of 350grams, there is 1/10th of 1% of\n"
              << "artificial sweetner, of which 14.29cans(5,250g) is required kill a mouse of weight 35grams\n"
              << std::endl
              << "-----------------------------------------------------------------------------------\n\n";

     std::cout << "Lethal does required to kill human of weight: " << weight
              << " is: " << ld_sweet_human << " grams.\nWhich is contained in: "
              << d_cans << " cans, which are at a total weight of: "
              << h_m_cans << " grams\n"
              << "-----------------------------------------------------------------------------------\n\n";


    std::cout << "Do you wish to restart/exit the program\n"
              << " 'R' to RESTART\n"
              << " 'E'or any other character to exit to Exit\n";
    std::cin >> ans;
   } while(ans == 'R' || ans == 'r');

   return(0);
}
