#include <iostream>

int main()
{
    const int a = 10, b = 10;
    if (a == 10 && b == 10) {
        std::cout << "true";
    }
    else if (a + b == 10) {
        std::cout << "true";
    }
    else std::cout << "false";

}