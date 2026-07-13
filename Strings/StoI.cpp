/*

Given the strings "88" and "101.4" (imagine these came from a thermometer log line), convert the first to an int temp and the second to a double reading using std::stoi/std::stod. Then convert temp back into a string using std::to_string and print the result in this exact format:
temp as string: 88, reading: 101.4

*/

#include <sstream>
#include <string>
#include <iostream>

int main(){
    std::stringstream thermometerLog{"88 101.4"};
    std::string a{};
    std::string b{};
    thermometerLog >> a >> b;
    int temp{std::stoi(a)};
    double reading{std::stod(b)};
    std::string tempStr{std::to_string(temp)};

    std::cout << "temp as string: " << tempStr << ", reading: " << reading << '\n';
    return 0;
}

/*

g++ StoI.cpp -o StoConv.elf -Wall -Wextra -Werror -std=c++17
./StoConv.elf 
temp as string: 88, reading: 101.4

*/