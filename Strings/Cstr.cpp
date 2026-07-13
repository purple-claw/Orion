#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string s{"Hello"};
    std::string message{"System nominal"};

    const char* cstr{s.c_str()};

    std::cout << "cstr = " << cstr << '\n';
    std::cout << "C-style length: " << std::strlen(cstr) << '\n';
    std::printf("%s\n", message.c_str());

    return 0;
}

/*

g++ Cstr.cpp -o Cstr.elf -Wall -Wextra -Werror -std=c++17
./Cstr.elf 

cstr = Hello
C-style length: 5
System nominal

*/