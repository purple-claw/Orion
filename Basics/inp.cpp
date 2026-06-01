#include <string>
#include <iostream>

int main()
{
    std::string name{};
    int age{0};
    double height{0.0};
    std::cout << "Enter Your Name : ";
    std::cin >> name;
    std::cout << "Enter Your Age in Years : ";
    std:: cin >> age;
    std::cout << "Enter Your Height in Meters : ";
    std::cin >> height;
    std::cout << "Hello, " << name << " You are " << age << " Years Old " << " and you Height is " << height << " meters." << "\n";
}