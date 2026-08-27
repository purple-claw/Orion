/*
Define an enum called Direction with four values in this order: North, East, South, West (let them default to 0, 1, 2, 3 — don't set numbers yourself).
Create a variable Direction d{South};. Print its numeric value,
then print "moving south" if d equals South. Use this exact format:
*/

#include <iostream>

int main(){
    enum Direction {
        North,
        East,
        South,
        West
    };

    Direction d{South};
    std::cout << "as a number: " << d << '\n';
    if (d == South){
        std::cout << "moving south" << '\n';
    }
    return 0;
}

/*

g++ Basic.cpp -o Bas.elf -Wall -Wextra -Werror -std=c++17
./Bas.elf 

as a number: 2
moving south

*/