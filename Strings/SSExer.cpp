/*
Given the string "Alice 89 92.5", use a std::stringstream to extract it into three variables — a std::string name, an int score1, and a double score2 — then print them in the format:
name: Alice, score1: 89, score2: 92.5
*/

#include <sstream>
#include <iostream>
#include <string>

int main()
{
    std::stringstream gvn{"Alice 89 92.5"};
    std::string name{};
    int score1{};
    double score2{};

    gvn >> name >> score1 >> score2;
    std::cout << "name: " << name << ", score1: " << score1 << ", score2: " << score2 << '\n';
    return 0;
}
    
/*
g++ SSExer.cpp -o SSExer.elf -Wall -Wextra -Werror -std=c++17
./SSExer.elf 
name: Alice, score1: 89, score2: 92.5
*/