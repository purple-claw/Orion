#include <iostream>

int main(){
    int score{};
    std::cout << "Enter the Score : " << "\n";
    std::cin >> score;

    if (score >= 90){
        std::cout << "Grades: A " << "\n";
    } else if (score >= 80 ) {
        std::cout << "Grades: B " << "\n";
    } else if (score >= 70) {
        std::cout << "Grades: C " << "\n";
    } else if (score >= 60) {
        std::cout << "Grades: D " << "\n";
    } else {
        std::cout << "Grades: F " << "\n";
    }
    return 0;
}