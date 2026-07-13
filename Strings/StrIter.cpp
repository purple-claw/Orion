/*
Given std::string code{"C0678"};, use a manual iterator loop
(begin()/end(), dereference, ++it — not range-based for) to print each character followed by a dash, all on one line:

*/

#include <string>
#include <iostream>
#include <cctype>

int main(){
    std::string code{"C0678"};

    for (std::string::iterator it{code.begin()}; it != code.end(); ++it){
        std::cout << *it  << '-';
    }
    std::cout << '\n';
    return 0;
}

/*

g++ StrIter.cpp -o StrIter.elf -Wall -Wextra -Werror -std=c++17
./StrIter.elf 

C-0-6-7-8-

*/