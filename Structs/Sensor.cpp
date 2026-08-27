/*

Define a struct called Sensor with three members in this order: std::string name;, int id;, double voltage;.

Create three variables:
Sensor s1{"Temp", 42, 3.3}; — full initialization
Sensor s2{}; — empty braces
Sensor s3{"Pressure", {}, {}}; — name only, rest explicitly zero

Print all three in this exact format (one line each):
s1: [Temp] [42] [3.3]
s2: [] [0] [0]
s3: [Pressure] [0] [0]

*/

#include <iostream>
#include <string>

struct Sensor
{
    std::string name;
    int id;
    double voltage;
};

int main(){
    Sensor s1{"Temp", 42, 3.3};
    Sensor s2{};
    Sensor s3{"Pressure", {}, {}};

    std::cout << "s1: " << "[" << s1.name << "] " << "[" << s1.id << "] " << "[" << s1.voltage << "]" << '\n';
    std::cout << "s2: " << "[" << s2.name << "] " << "[" << s2.id << "] " << "[" << s2.voltage << "]" << '\n';
    std::cout << "s3: " << "[" << s3.name << "] " << "[" << s3.id << "] " << "[" << s3.voltage << "]" << '\n';
    return 0;
}

/*

g++ Sensor.cpp -o Sensor.elf -Wall -Wextra -Werror -std=c++17
./Sensor.elf 

s1: [Temp] [42] [3.3]
s2: [] [0] [0]
s3: [Pressure] [0] [0] 

*/