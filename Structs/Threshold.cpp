/*

Define a struct SensorReading with two members, in this order: std::string name; and double voltage;.
Create std::array<SensorReading, 5> readings holding:

{"Temp", 3.3}
{"Pressure", 5.2}
{"Flow", 1.8}
{"Motor", 4.8}
{"Battery", 3.9}


*/

#include <iostream>
#include <array>
#include <string>

struct SensorReading{
    std::string name;
    double voltage;
};


int main(){
    std::array<SensorReading, 5> readings{{
        {"Temp", 3.3},
        {"Pressure", 5.2},
        {"Flow", 1.8},
        {"Motor", 4.8},
        {"Battery", 3.9}
    }};

    constexpr double threshold {4.0};
    int count {0};

    for (const SensorReading& s: readings){
        if (s.voltage > threshold){
            count++;
        }
    };

    std::cout << "Readings above " << static_cast<int>(threshold) << "V: " << count << "\n";
    return 0;
}

/*

g++ Threshold.cpp -o Threshold.elf -Wall -Wextra -Werror -std=c++17
./Threshold.elf 

Readings above 4V: 2

*/