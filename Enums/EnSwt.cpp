/*

Using enum class Status : std::uint8_t { Idle, Running, Error }; from the last exercise, create Status s{Status::Error};. 
Write a switch on s with fully-qualified case labels that prints "nothing to do" for Idle, "in progress" for Running, 
and "needs attention" for Error — no default: case, so the compiler's exhaustiveness check actually applies.
 Compile and run under the standard flags, paste the real output.
*/


#include <iostream>
#include <cstdint>

enum class Status : std::uint8_t {
    Idle,
    Running,
    Error
};

int main(){
    Status s{Status::Error};

    switch (s)
    {
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
    return 0;
}

/*

g++ EnSwt.cpp -o Enswt.elf -Wall -Werror -Wextra -std=c++17
./Enswt.elf 

needs attention

*/