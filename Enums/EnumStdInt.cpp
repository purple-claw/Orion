/*

Define enum class Status : std::uint8_t { Idle, Running, Error };. 
Create Status s{Status::Running};. Print sizeof(Status) and the numeric value of s (via static_cast<int>), in this exact format:

*/

#include <iostream>
#include <cstdint>


enum class Status : std::uint8_t {
    Idle,
    Running,
    Error
};

int main(){
    Status s{Status::Running};
    std::cout << "sizeof(Status): " <<  sizeof(s) << " bytes" << '\n';
    std::cout << "as a number: " << static_cast<int>(s) << '\n';
    return 0;
}

/*

g++ EnumStdInt.cpp -o EStdint.elf -Wall -Wextra -Werror -std=c++17
./EStdint.elf 

sizeof(Status): 1 bytes
as a number: 1

*/