/*

Define a struct called SensorReading with two members, in this order: double temperature; and double humidity;. 
Create a variable SensorReading r{72.5, 45.0};. Print both members in this exact format:

temperature: 72.5, humidity: 45

*/

#include <iostream>

struct SensorReading
{
    double temperature;
    double humidity;
};


int main(){
    SensorReading r{72.5, 45.0};
    std::cout << "temperature: " << r.temperature << ", humidity: " << static_cast<int>(r.humidity) << '\n';
    return 0;
}


/*

g++ Syn.cpp -o Syn.elf -Wall -Wextra -Werror -std=c++17
./Syn.elf 

temperature: 72.5, humidity: 45

*/