#include <iostream>

enum class Direction {
    North,
    East,
    South,
    West
};

int main(){
    Direction d{Direction::South};
    int n{static_cast<int>(d)};
    std::cout << "as a number: " << n << '\n'; 
    if (d == Direction::South){
        std::cout << "moving south" << '\n';
    }
    return 0;
}

/*

g++ EnumDir.cpp -o EnDir.elf -Wall -Wextra -Werror -std=c++17
./EnDir.elf 

as a number: 2
moving south

*/