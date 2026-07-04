#include <iostream>

int main(){
    int total {9};
    int div {2};

    double x = static_cast<double>(total / div);
    double y = static_cast<double>(total) / div;

    std::cout << "Wrong:   " << x   << '\n';
    std::cout << "Correct: " << y << '\n';

    return 0;
}