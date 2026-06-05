#include <iostream>

int addTen(int n) {
    n = n + 10;
    return n;       // returns the modified copy
}

int main() {
    int value{20};
    int result{addTen(value)};
    std::cout << value  << '\n';    // 20 — original unchanged
    std::cout << result << '\n';    // 30 — returned copy captured here
}