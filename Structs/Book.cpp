/*

Define a struct called Book with three members, 
in this order: std::string title;, int pages;, double price;. 
Create Book b{"Dune", 412, 9.99};. Print all three members in this exact format:
Dune has 412 pages and costs 9.99

*/

#include <iostream>
#include <string>

struct Book
{
    std::string title;
    int pages;
    double price;
};


int main(){
    Book b{"Dune", 412, 9.99};
    std::cout << b.title << " has " << b.pages << " pages and costs " << b.price << '\n';
    return 0;
}

/*

 g++ Book.cpp -o Bok.elf -Wall -Wextra -Werror -std=c++17
 ./Bok.elf 
 
Dune has 412 pages and costs 9.99

*/