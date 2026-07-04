/*
Write a program that:

Declares std::string text{"The C++ language was created by Bjarne Stroustrup"}
Finds and prints the index where "Bjarne" starts
Extracts and prints just the word "Bjarne" using substr
Extracts and prints just the word "Stroustrup" using find and substr
Checks if "Python" exists in the string — prints "Found" or "Not found"
Finds every occurrence of "the" or "The" and prints each index
*/

#include <iostream>
#include <string>

int main(){
    std::string text{"The C++ language was created by Bjarne Stroustrup"};
    size_t st{text.find("Bjarne")};

    if (st != std::string::npos){
        std::cout << "Found at Index : " << st << '\n';
    }
    else {
        std::cout << "Not Found" << '\n';
    }

    std::string tmp{text.substr(st, 6)};
    std::cout << "Using Substr: " << tmp << '\n';

    size_t ps{text.find("Stroustrup")};
    if (ps != std::string::npos){
        tmp = text.substr(ps, 10);
        std::cout << "Stroustrup using find and substr : " << tmp << '\n';
    }
    else {
        std::cout << "Stroustoup Not Found in String" << '\n';
    }

    size_t py{text.find("Python")};
    if (py != std::string::npos){
        std::cout << "Found" << '\n';
    }
    else {
        std::cout << "Not Found" << '\n';
    }

    size_t th{text.find("the", 0)};
    while (th != std::string::npos){
        std::cout << "Found at : " << th << '\n';
        th = text.find("the", th+1);
    }

    size_t thC{text.find("The", 0)};
    while (thC != std::string::npos){
        std::cout << "Found at : " << thC << '\n';
        thC = text.find("The", thC+1);
    }
    return 0;
}


/*
g++ Bjarne.cpp -o Bjarne.elf -Wall -Wextra -Werror -std=c++17
./Bjarne.elf 

Found at Index : 32
Using Substr: Bjarne
Stroustrup using find and substr : Stroustrup
Not Found
Found at : 0

*/