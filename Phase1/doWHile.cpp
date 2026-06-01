#include <iostream>

int main() {
    int number{};
    
    do {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> number;
        
        if (number < 1 || number > 10) {
            std::cout << "Invalid! Try again." << '\n';
        }
        
    } while (number < 1 || number > 10);
    
    std::cout << "Valid input" << '\n';
    
    return 0;
}