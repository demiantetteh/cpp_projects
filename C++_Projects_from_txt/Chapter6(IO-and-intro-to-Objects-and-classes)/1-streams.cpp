#include <fstream>

int main()
{
    std::ifstream inStream;
    std::ofstream outStream;

    inStream.open("infile.dat");
    outStream.open("outfile.dat");

    int first, second, third;
    inStream >> first >> second >> third;
    outStream << "The sum of the first 3\n"
              << "numbers in infile.dat\n"
              << "is " << (first + second + third) << std::endl;
    inStream.close();
    outStream.close();

    return(0);
}