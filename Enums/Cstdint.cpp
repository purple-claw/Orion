#include <cstdint>
#include <iostream>

int main(){
    std::uint8_t code{90};
    std::uint32_t count{1000};
    std::cout << "count: " <<  count << '\n';
    std::cout << "code: " << static_cast<int>(code) << '\n';
    return 0;
}

/*

g++ Cstdint.cpp -o Cstdint.elf -Wall -Wextra -Werror -std=c++17
./Cstdint.elf 

count: 1000
code: 90s

*/