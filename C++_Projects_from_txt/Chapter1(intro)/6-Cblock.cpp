#include <iostream>

int main()
{
    char sym;

    std::cout << "Enter a symbol/character to be used to print 'C' in block letter\n";
    std::cin >> sym;
    std::cout << '\n';
                //x2space
    std::cout << "  " << sym << sym << sym << '\n';
    std::cout << " " << sym << "   " << sym << '\n';
    std::cout << sym << '\n';
    std::cout << sym << '\n';
    std::cout << sym << '\n';
    std::cout << sym << '\n';
    std::cout << sym << '\n';
    std::cout << " " << sym << "   " << sym << '\n';
    std::cout << "  " << sym << sym << sym << '\n';

    return (0);
}
