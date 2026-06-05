#include <iostream>

void swap(int& a, int& b){
    int temp{a};
    a = b;
    b = temp;
}

int main(){
    int a{35};
    int b{56};
    swap(a,b);
    std::cout << "Value of A is : " << a << '\n';
    std::cout << "Value of B is : " << b << '\n';
    return 0;
}