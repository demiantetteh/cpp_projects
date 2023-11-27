#include <iostream>
#include <cassert>

void scale(double scaleFactor, double& value1, double& value2);
// Function to scale two values based on a given factor


int main() {
    double value1 = 10.0;
    double value2 = 5.0;
    double scaleFactor;

    std::cout << "Enter the scale factor: ";
    std::cin >> scaleFactor;

    scale(scaleFactor, value1, value2);

    return 0;
}
void scale(double scaleFactor, double& value1, double& value2) {
    assert(scaleFactor != 0); // Precondition: scale factor should not be zero

    std::cout << "Before scaling: " << value1 << ", " << value2 << std::endl;
    value1 *= scaleFactor;
    value2 *= scaleFactor;
    std::cout << "After scaling: " << value1 << ", " << value2 << std::endl;
}