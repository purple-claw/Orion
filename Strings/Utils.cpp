#include <iostream>
#include <string>

int main()
{
    std::string s{"data"};

    std::cout << "size: " << s.size() << '\n';
    std::cout << "capacity: " << s.capacity() << '\n';

    s.reserve(50);
    std::cout << "capacity after reserve(50): " << s.capacity() << '\n';

    s.resize(5, 'x');
    std::cout << "s after resize(5, 'x'): " << s << '\n';
    std::cout << "size after resize: " << s.size() << '\n';

    return 0;
}

/*
g++ Utils.cpp -o StrUtils.elf -Wall -Wextra -Werror -std=c++17
./StrUtils.elf 

size: 4
capacity: 15
capacity after reserve(50): 50
s after resize(5, 'x'): datax
size after resize: 5

*/