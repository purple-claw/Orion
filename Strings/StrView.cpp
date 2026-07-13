/*
Given std::string s{"Thermometer Reading"};, create a std::string_view sv over it, then use sv.substr() to get a view of just the 
first 11 characters ("Thermometer") with no copying involved, and print it.
*/

#include <string_view>
#include <string>
#include <iostream>

void prntVw(std::string_view strr){
    std::cout << strr << '\n';
}

int main(){
    std::string s{"Thermometer Reading"};
    std::string_view sv{s};
    std::cout << sv.substr(0,11) << '\n';
    return 0;
}

/*

 g++ StrView.cpp -o StrVw.elf -Wall -Wextra -Werror -std=c++17
 ./StrVw.elf 
 
Thermometer

*/