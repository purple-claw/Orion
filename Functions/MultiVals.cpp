#include <iostream>
#include <utility>
#include <array>

std::pair<int, int> mnMax(const std::array<int, 5>& arr) {
    int mn{arr[0]};
    int mx{arr[0]};

    for (int m:arr){
        if (m < mn) mn = m;
        if (m > mx) mx = m;
    }
    return {mn, mx};
}

int main(){
    std::array<int, 5> scrs{85, 92, 78, 95, 88};
    auto rs{mnMax(scrs)};
    std::cout << "Min: " << rs.first  << '\n';    
    std::cout << "Max: " << rs.second << '\n';   
}