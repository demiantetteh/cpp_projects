#include <iostream>

int main()
{
    double C, L, Area, length, width;
    double sum = 0;
    
    std::cin >> C; // cost per seed
    std::cin >> L; // # of lawns
    
    for(int i = 0; i < L; i++)
    {
        std::cin >> width >> length;
        Area = width * length; // m^2
        
        sum += (Area / C);
    }
    
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(7);
    
    std::cout << sum;
    
    return (0);
}