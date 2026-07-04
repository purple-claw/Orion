/*
Write a program that:

Declares std::string word1{"Programming"} and std::string word2{"programming"}
Compares them with == and prints the result
Writes a function std::string toLower(const std::string& s) that returns a lowercase version without modifying the original
Uses toLower on both words and compares again, printing the result
Declares std::string fruit1{"apple"} and std::string fruit2{"Banana"}
Prints which one is lexicographically smaller using <, and explain in a comment why the ASCII values produce that result

*/

#include <string>
#include <iostream>
#include <cctype>

const std::string toLwr(const std::string& s){
    std::string res{s};
    for (char& c:res){
        c = std::tolower(c);
    }
    return res;
}

int main(){
    std::string w1{"Programming"};
    std::string w2{"programming"};
    std::string f1{"apple"};
    std::string f2{"Banana"};
    
    bool res{w1 == w2};
    std::cout << res << '\n';

    w1 = toLwr(w1);
    w2 = toLwr(w2);

    std::cout << w1 << '\n';
    std::cout << w2 << '\n';

    res = (w1 == w2);
    std::cout << res << '\n';

    res = (f1 < f2);
    // Here we Compare the Ascii values of the chars in the strings, here res is false beacuse ASCII value of lowercase a is larger than ASCII value of Uppercase B
    if (res){
        std::cout << f1 << " is lexographically Smaller than " << f2 << '\n';
    } else {
        std::cout << f2 << " is lexographically Smaller than " << f1 << '\n';
    }
    return 0;
}

/*

g++ Case.cpp -o Case.elf -Wall -Wextra -Werror -std=c++17
./Case.elf 

0
programming
programming
1

Banana is lexographically Smaller than apple

*/