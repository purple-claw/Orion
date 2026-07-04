/*
 Three functions — declared in this order at the top:
 isEven, describeNumber, printLine

 But defined in this order at the bottom:
 printLine, describeNumber, isEven

 isEven(int n)       — returns true if n is even
 printLine()         — prints "---" as a separator
 describeNumber(int n) — prints the number, calls isEven,
//                         prints "even" or "odd", calls printLine
*/

#include <iostream>
#include <array>

bool isEven(int n);
void describeNumber(int n);
void printLn();


void printLn(){
    std::cout << "---" << '\n';
}

void describeNumber(int n){
    std::cout << "Number is " << n << '\n';
    switch(isEven(n)){
        case true: {
            std::cout << "Even" << '\n';
            printLn();
            break;
        }
        case false: {
            std::cout << "Odd" << '\n';
            printLn();
            break;
        }
    }
}

bool isEven(int n){
    return n % 2 == 0;
}

int main(){
    std::array<int, 5> nums{4, 7, 12, 9, 0};
    for (int i:nums){
        describeNumber(i);
    }
    return 0;
}

/*
g++ FunDec.cpp -o FnDec.elf -Wall -Werror -Wextra -std=c++17
./FnDec.elf
 
Number is 4
Even
---
Number is 7
Odd
---
Number is 12
Even
---
Number is 9
Odd
---
Number is 0
Even
---

*/