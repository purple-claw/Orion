/*
Implements fizzBuzzValue exactly as shown
In main, loops from 1 to 20
For each number, calls fizzBuzzValue and prints:

"FizzBuzz" if result is 3
"Fizz" if result is 1
"Buzz" if result is 2
The number itself if result is 0
*/

#include <iostream>

int fzBz(int n){
    if (n % 15 == 0) {return 3;}
    if (n % 3 == 0) {return 1;}
    if (n % 5 == 0) {return 2;}
    return 0;
}

int main(){
    for (int i{1}; i<21; i++){
        switch(fzBz(i)){
            case 3:{
                std::cout << "FizzBuzz" << '\n';
                break;
            }
            case 2:{
                std::cout << "Buzz" << '\n';
                break;
            }
            case 1:{
                std::cout << "Fizz" << '\n';
                break;
            }
            default:{
                std::cout << i << '\n';
                break;
            }
        }
    }
}

/*

g++ Fizzbuzz.cpp -o FzBz.elf -Wall -Wextra -Werror -std=c++17
./FzBz.elf

1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz

*/