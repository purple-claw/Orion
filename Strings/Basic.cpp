/*

Declares std::string first{"Embedded"} and std::string second{"Systems"}
Concatenates them with a space between and stores in std::string full
Prints full
Appends " with C++" to full using +=
Prints full again
Inserts "Great " at the beginning of full (position 0)
Prints full again
Erases the first 6 characters from full
Prints full again
Prints the length of full

*/

#include <string>
#include <iostream>

int main(){
    std::string fst{"Embedded"};
    std::string sec{"Systems"};
    std::string full{fst + " " + sec};
    std::cout << "Full String is " << full << '\n';
    full += " with C++";
    std::cout << "Full String is " << full << '\n';
    full.insert(0, "Great ");
    std::cout << "Full String is " << full << '\n';
    full.erase(0, 6);
    std::cout << "Full String is " << full << '\n';
    std::cout << "Length of String FUll is " << full.length() << '\n';
    return 0;

}

/*
g++ Basic.cpp -o Bsc.elf -Wall -Wextra -Werror -std=c++17
./Bsc.elf 

Full String is Embedded Systems
Full String is Embedded Systems with C++
Full String is Great Embedded Systems with C++
Full String is Embedded Systems with C++
Length of String FUll is 24

*/