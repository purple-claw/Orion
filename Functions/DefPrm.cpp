/*
Write a function void printBox(std::string message, char border{'*'}, int width{20}) that prints a message inside a box made of the border character.
Example output for printBox("Hello"):
*/

#include <iostream>

void prntBox(std::string msg, char border = '*', int width = 20);

int main(){
    prntBox("Hello");
    prntBox("C++", '-', 10);
    prntBox("Bye", '#', 15);
    return 0;
}

void prntBox(std::string msg, char border, int wdth){
    std::cout << std::string(wdth, border) << '\n';
    std::cout << msg << '\n';
    std::cout << std::string(wdth, border) << '\n';
}


/*
g++ DefPrm.cpp -o Dprm -Wall -Wextra -Werror -std=c++17
./Dprm 
********************
Hello
********************
----------
C++
----------
###############
Bye
###############
*/