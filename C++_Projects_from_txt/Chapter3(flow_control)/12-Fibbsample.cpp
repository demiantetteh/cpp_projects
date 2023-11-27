#include <iostream>

int main()
{
    int first = 0, next = 1;
    int second, terms;

    std::cout << "FIBONACCI SEQUENCE SAMPLE\n";
    std::cout << "Enter the number of terms you'd like for this series\n->";
    std::cin >> terms;

    for(int i = 1; i <= terms; i++)
    {
        if(i == terms)
            std::cout << next;
        else{
            second = first + next;

            std::cout << next << " ,";

            first = next;
            next = second;
        }
    }
}