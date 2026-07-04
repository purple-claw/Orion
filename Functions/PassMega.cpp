/*
1. int absolut(int n)
   — returns the absolut value of n
   — do not use std::absolut — compute it yourself using an if statement

2. void printString(const std::string& str)
   — prints every character on a separate line using a range-based for loop

3. void reverseArray(std::array<int, 5>& arr)
   — reverses the array in place
   — do not use std::reverse — do it yourself
   — hint: swap first with last, second with second-to-last, and so on

4. bool isMt(const std::string& str)
   — returns true if the string has no characters, false otherwise
   — do not use .empty() — compute it yourself
*/

#include <iostream>
#include <string>
#include <array>

int absolut(int n) {
    if (n < 0) {
        return -n;   
    }
    return n; 
}

void prntStr(const std::string& word){
    for (char s : word){
        std::cout << s << '\n';
    }
    std::cout << '\n';
}

void swap(int& a, int& b){
    int temp{a};
    a = b;
    b = temp;
}

void prntArr(const std::array<int,5>& a){
    std::cout << "Reversed Array : ";
    for (int x:a){
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

void rvsArray(std::array<int, 5>& tArr){
    int sz{static_cast<int>(tArr.size())};
    for (int i{0}; i < sz / 2; ++i){
        swap(tArr[i], tArr[sz-1-i]);
    }
}

bool isMt(const std::string& str) {
    int count{0};
    for (char _ : str) {
        count++;
    }
    return count == 0;
}

int main(){
    int val1{9};
    int val2{19};
    int val3{-9};
    int res{absolut(val1)};
    int res2{absolut(val2)};
    int r3{absolut(val3)};

    std::cout << "absolut Value of the Number " << val1 << " is " << res << '\n';
    std::cout << "absolut Value of the Number " << val2 << " is " << res2 << '\n';
    std::cout << "absolut Value of the Number " << val3 << " is " << r3 << '\n';

    std::string w1{"Ad Astra Per Aspera"};
    prntStr(w1);

    std::array<int, 5> arr1{3,7,9,3,5};
    std::array<int, 5> arr2{1,6,3,7,9};
    rvsArray(arr1);
    prntArr(arr1);

    rvsArray(arr2);
    prntArr(arr2);

    std::string w2{"hello"};
    std::string w3{""};
    if (isMt(w2)){
        std::cout << "Is String Empty : True " << '\n';
    }
    else {
        std::cout << "Is String Empty : False " << '\n';
    }

    if (isMt(w3)){
        std::cout << "Is String Empty : True " << '\n';
    }
    else {
        std::cout << "Is String Empty : False " << '\n';
    }
    
    return 0;
}

/*

g++ PassMega.cpp -o Pmga.elf -Wall -Werror -Wextra -std=c++17
./Pmga.elf 

absolut Value of the Number 9 is 9
absolut Value of the Number 19 is 19
absolut Value of the Number -9 is 9
A
d
 
A
s
t
r
a
 
P
e
r
 
A
s
p
e
r
a

Reversed Array : 5 3 9 7 3 
Reversed Array : 9 7 3 6 1 
Is String Empty : False 
Is String Empty : True 

*/