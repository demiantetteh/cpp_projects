#include <iostream>

int main()
{
    std::string sentence;
    int count = 0;

    std::cout << "Enter your sentence: ";
    getline(std::cin, sentence);

    int length = sentence.length();

    for(int i = 0; i <= length; i++)
    {
        if((sentence[i] == ' ') || sentence[i] == '.')
        {
            count++;
        }
    }
    std::cout << "Words: " << count << std::endl;

    return (0);
}