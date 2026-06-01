#include <iostream>

int main(){
    constexpr int dayInWeek{7};
    constexpr double pi{3.12756746534634865};
    const int fgrs{10};
    dayInWeek = 8;

    std::cout << "Days in a week: " << dayInWeek << '\n';
    std::cout << "Pi: "             << pi         << '\n';
    std::cout << "Fingers: "        << fgrs    << '\n';

    return 0;
}