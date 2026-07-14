#include <iostream>
#include <string>

int main()
{
    std::string s{"data"};

    std::cout << "size: " << s.size() << ", capacity: " << s.capacity() << '\n';

    s.reserve(100);
    std::cout << "capacity after reserve: " << s.capacity() << '\n';

    s.resize(4);
    std::cout << "s: " << s << ", size: " << s.size() << '\n';

    return 0;
}

/*
g++ Utils.cpp -o StrUtils.elf -Wall -Wextra -Werror -std=c++17
./StrUtils.elf 

 size: 4, capacity: 15
 capacity after reserve: 100
 s: data, size: 4

*/