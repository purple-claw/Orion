#include <array>
#include <utility>
#include <iostream>

std::tuple<int, int, float> mnMax(const std::array<int, 5>& arr) {
    int mn{arr[0]};
    int mx{arr[0]};
    float avg{0};

    for (int m:arr){
        if (m < mn) mn = m;
        if (m > mx) mx = m;
        avg = mn / mx;
    }
    return {mn, mx, avg};
}

int main(){
    std::array<int, 5> scrs{85, 92, 78, 95, 88};
    auto rs{mnMax(scrs)};
    // std::cout << "Min: " << rs.first  << '\n';    
    // std::cout << "Max: " << rs.second << '\n';
    // std::cout << "Average: " << rs.third << '\n'; 
}