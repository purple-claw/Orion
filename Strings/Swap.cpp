#include <iostream>
#include <string>
#include <utility>

int main() {
    std::string first{"North"};
    std::string second{"South"};

    std::cout << "before: first = " << first << ", second = " << second << '\n';

    std::swap(first, second);

    std::cout << "after: first = " << first << ", second = " << second << '\n';

    return 0;
}

/*
g++ Swap.cpp -o Swap.elf -Wall -Wextra -Werror -std=c++17
./Swap.elf 

before: first = North, second = South
after: first = South, second = North
*/