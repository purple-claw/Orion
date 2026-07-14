/*

Exercise:
Given std::string x{"cat"}; and std::string y{"cat"};, 
use .compare() and the negative/zero/positive 
check to print exactly one of these three lines depending on the result:

*/

#include <iostream>
#include <string>

int main(){
    std::string x{"cat"};
    std::string y{"cat"};
    int res{x.compare(y)};

    if (res < 0){
        std::cout << "result: less" << '\n';
    } else if (res == 0){
        std::cout << "result: equal" << '\n';
    } else {
        std::cout << "result: greater" << '\n';
    }
    return 0;
}

/*

g++ StrComp.cpp -o StrComp.elf -Wall -Wextra -Werror -std=c++17
./StrComp.elf 

result: equal

*/