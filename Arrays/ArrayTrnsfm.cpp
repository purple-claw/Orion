/*
Exercise 2 — Array Transformer
Declare a std::array of 6 integers: {3, 7, 2, 9, 4, 6}.
Write a program that:

Prints the original array
Sorts it ascending and prints it
Sorts it descending and prints it
Fills it entirely with 0 using .fill() and prints it
*/

#include <array>
#include <iostream>
#include <algorithm>
#include <functional>  // for std::greater

void outArr(const std::array<int, 6>& arr, const std::string& msg = "") {
    std::cout << msg;
    for (const auto& val : arr)
        std::cout << val << ' ';
    std::cout << '\n';
}

int main() {
    std::array<int, 6> nums{3, 7, 2, 9, 4, 6};
    outArr(nums, "Original array: ");

    std::sort(nums.begin(), nums.end());
    outArr(nums, "Sorted ascending: ");

    std::sort(nums.begin(), nums.end(), std::greater<int>{});
    outArr(nums, "Sorted descending: ");

    nums.fill(0);
    outArr(nums, "Filled with zeros: ");

    return 0;
}

/*
g++ ArrayTrnsfm.cpp -o ArrTrns.elf -Wall -Wextra -Werror -std=c++17
./ArrTrns.elf 

Original array: 3 7 2 9 4 6 
Sorted ascending: 2 3 4 6 7 9 
Sorted descending: 9 7 6 4 3 2 
Filled with zeros: 0 0 0 0 0 0 
*/