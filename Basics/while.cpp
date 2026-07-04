#include <iostream>

int main()
{
    int inp{-1};
    while (inp != 0) {
        std::cout << "Enter a number (0 to quit): ";
        std::cin >> inp;
    }
    return 0;
}