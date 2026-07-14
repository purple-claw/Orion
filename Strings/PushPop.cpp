/*
Start with std::string s{}; (empty). Use push_back() three times to build up "Dog", one letter at a time. Print it. 
Then call pop_back() twice, and print the result. Use this exact format:
*/

#include <iostream>
#include <string>

int main(){
    std::string tmp{};
    tmp.push_back('D');
    tmp.push_back('o');
    tmp.push_back('g');

    std::cout << "s: " << tmp << '\n';

    tmp.pop_back();
    tmp.pop_back();
    std::cout << "s after popping twice: " << tmp << '\n';
    return 0;
}

/*

g++ PushPop.cpp -o PuPo.elf -Wall -Wextra -Werror -std=c++17
./PuPo.elf 

s: Dog
s after popping twice: D

*/