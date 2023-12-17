#include <iostream>
#include <cmath>


bool isRight(int a, int b, int c);

int main()
{ 
    int a, b, c;
    std::cin >> a >> b >> c;
    bool Right;
    Right = isRight(a, b, c);

    if (Right == true)
    {
        std::cout << "Right";
    }
}

bool isRight(int a, int b, int c)
{
    bool x, y, z;
    x = pow(a,2) == pow(b, 2) + pow(c, 2);
    y = pow(b,2) == pow(a, 2) + pow(c, 2);
    z = pow(c,2) == pow(a, 2) + pow(b, 2);

    return (x || y || z);
}