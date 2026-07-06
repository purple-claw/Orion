#include <sstream>
#include <string>
#include <iostream>

int main(){
    std::stringstream sr{"42 Dev Programmer"};

    int age{};
    std::string name{};
    std::string occup{};

    sr >> age >> name >> occup;
    // std::cout << name << "'s" << " age is " << age << " and he is currenlty a " << occup << '\n';
    return 0;
}