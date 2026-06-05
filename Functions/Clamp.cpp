#include <iostream>

void clamp(int& val, int mn, int mx){
    if (val < mn){
        val = mn;
    }
    else if (val > mx){
        val = mx;
    }
}

int main(){
    int a{150};
    int b{-5};
    int c{50};
    int m{0};
    int n{100};
    clamp(a,m,n);
    std::cout << "Clamped Value of A is : " << a << '\n';
    clamp(b,m,n);
    std::cout << "Clamped Value of B is : " << b << '\n';
    clamp(c,m,n);
    std::cout << "Clamped Value of C is : " << c << '\n';
    return 0;
}

/*
g++ Clamp.cpp -o Clmp.elf -Wall -Wextra -Werror -std=c++17
./Clmp.elf 

Clamped Value of A is : 100
Clamped Value of B is : 0
Clamped Value of C is : 50
*/