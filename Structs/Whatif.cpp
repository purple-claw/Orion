#include <iostream>
#include <array>
#include <string>

struct Book{
    std::string title;
    double price;
};

int main(){
    std::array<Book, 3> books{
        {
            {"Dune", 9.99},
            {"Foundation", 8.75},
            {"Neuromancer", 7.25}
        }
    };

    for (const Book& b : books){
        std::cout << b.title << " costs " << b.price << '\n';
    }

    return 0;
}

/*

g++ Whatif.cpp -o Wif.elf -Wall -Werror -Wextra -std=c++17
./Wif.elf 

Dune costs 9.99
Foundation costs 8.75
Neuromancer costs 7.25

*/