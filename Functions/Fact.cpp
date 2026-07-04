/*
Implement factorial recursively
In main, print factorial for 0 through 7
Handle the edge case: 0! = 1 (by definition)
*/

#include <iostream>

int factorial(int n){
    if ( n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n{7};
    int res{0};
    for (int i{0}; i<n+1; i++){
        res = factorial(i);
        std::cout << "Factorial of " << i << " is " << res << '\n';
    }
    return 0;
}


/*
g++ Fact.cpp -o Fact.o -Wall -Wextra -Werror -std=c++17
./Fact.o 

Factorial of 0 is 1
Factorial of 1 is 1
Factorial of 2 is 2
Factorial of 3 is 6
Factorial of 4 is 24
Factorial of 5 is 120
Factorial of 6 is 720
Factorial of 7 is 5040

*/