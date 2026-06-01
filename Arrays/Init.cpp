/*
Declares a std::array of 5 integers representing temperatures: {32, 28, 35, 30, 27}
Uses a range-based for loop to print all temperatures
Uses a traditional for loop to find and print the highest temperature
Uses a range-based for loop with a reference to add 2 to every temperature
Prints all temperatures again after the modification
*/

#include <iostream>
#include <array>

int main(){
    std::array<int, 5> temps{32, 28, 35, 30, 27};
    int size{static_cast<int>(temps.size())};

    // Uses a Range Based Loop to Iterate
    for (int t:temps){
        std::cout << t << '\n';
    }

    // using a Trad Loop to Find and Print the Highest Temp
    int hVal{temps[0]};
    for (int i{0}; i < size; i++){
        if (temps[i] > hVal){
            hVal = temps[i];
        }
    }
    std::cout << "Highest Temperture is " << hVal << '\n';
    
    // Range Based For Loop Witrh reference to Add 2 To every temp
    for (int& s:temps){
        s += 2;
    }

    // Printing all The Temps After Modification
    for (int i:temps){
        std::cout << "Temperature after Modification is " << i << '\n';
    }
    return 0;
}