/*

Define a struct SensorReading with two members, in this order: std::string name; and double voltage;.
Create std::array<SensorReading, 3> readings holding:
{"Temp", 3.3}
{"Pressure", 5.2}
{"Flow", 1.8}
Using the max-finding pattern (seed with the first element, loop, compare the voltage member), find the reading with the highest voltage and print it in this exact format:

*/



#include <iostream>
#include <array>
#include <string>

struct SensorReading{
    std::string name;
    double voltage;
};

int main(){
    std::array<SensorReading, 3> readings{
        {
            {"Temp", 3.3},
            {"Pressure", 5.2},
            {"Flow", 1.8}
        }
    };

    SensorReading isReallyMax{readings[0]};

    for (const SensorReading& s : readings){
        if (s.voltage > isReallyMax.voltage) {
            isReallyMax = s;
        };
    };

    std::cout << "Highest: " << isReallyMax.name << " at " << isReallyMax.voltage << "V\n";
    return 0;
}

/*

g++ Max.cpp -o Max.elf -Wall -Wextra -Werror -std=c++17
./Max.elf 

Highest: Pressure at 5.2V

*/