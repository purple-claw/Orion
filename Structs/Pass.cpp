#include <iostream>
#include <string>

struct SensorReading
{
    std::string name;
    int id;
    double voltage;
};

void printReading(const SensorReading& r){
    std::cout << r.name << " #" << r.id << ": " << r.voltage << "V\n";
}

void calibrate(SensorReading& r){
    r.voltage += 1.0;
}

int main(){
    SensorReading s{"Pressure", 7, 2.4};
    printReading(s);

    calibrate(s);
    printReading(s);

    return 0;

}

/*

g++ Pass.cpp -o Pass.elf -Wall -Wextra -Werror -std=c++17
./Pass.elf 

Pressure #7: 2.4V
Pressure #7: 3.4V

*/