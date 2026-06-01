#include <iostream>

int main(){
    int x{5};
    int y{10};
    bool active{false};
    int res{};

    res = (x < y && active);
    std::cout << "x < y && active " << " : " << res << "\n";
    res = (x < y || active);
    std::cout << "x < y || active " << " : " << res << "\n";
    res = !(x == y);
    std::cout << "!(x == y) " << " : " << res << "\n";
    res = (x != y && !active);
    std::cout << "x != y && !active " << " : " << res << "\n";

    return 0;
}