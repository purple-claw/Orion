#include <iostream>
#include <cstdint>


enum class Status : std::uint8_t { Idle, Running, Error };

int main(){
    int raw {5};
    Status s{static_cast<Status>(raw)};

    switch (s){
        case Status::Idle:
            std::cout << "nothing to do\n";
            break;
        case Status::Running:
            std::cout << "in progress\n";
            break;
        case Status::Error:
            std::cout << "needs attention\n";
            break;
    }
    std::cout << "raw value stored: " << static_cast<int>(s) << '\n';
    return 0;

}

/*

g++ Enum2Int.cpp -o Enum2Int.elf -Wall -Wextra -Werror -std=c++17
./Enum2Int.elf 

raw value stored: 5

*/