/*
Declare a std::array of 7 integers: {15, 42, 8, 23, 42, 16, 42}.
Write a program that:

Asks the user to enter a number to search for
Counts how many times that number appears in the array
Prints the index of every occurrence
Prints "Not found" if it does not exist
*/

#include <array>
#include <iostream>
#include <algorithm>

int main(){
    std::array<int,7> ints{15, 42, 8, 23, 42, 16, 42};
    int size{static_cast<int>(ints.size())};
    int num{0};
    std::cout << "Enter a Number : ";
    std::cin >> num;
    int cntr{0};
    for (int i{0}; i < size; i++){
        if (ints.at(i) == num){
            std::cout << "The Number Found at Index >> " << i << " in the Array" << '\n';
            cntr++;
        }
    }
    std::cout << "The Number Appears " << cntr << " times in the Array" << '\n';
    if (cntr == 0){
        std::cout << "Not Found" << '\n';
    }
    return 0;
}