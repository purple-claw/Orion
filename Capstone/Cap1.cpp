/*

Capstone 1 — "Class Grade Report" (foundational integration)

Track a small class of students: name + score out of 100, and produce a report.

Requirements:

A constexpr for the number of students.
Names in an array of std::string, scores in a parallel array of int.
An enum class Grade { A, B, C, D, F };. A function converting a score to a Grade (90+=A, 80-89=B, 70-79=C, 60-69=D, below 60=F) using switch or if/else if.
Loop through all students (your choice of loop style), printing each: Alice: 92 (A)
A separate function, taking the scores array by const reference, returning the class average as a double.

Must genuinely use: constexpr, arrays, a const-reference array parameter, enum class, switch, loops, string formatting.

Expected shape:

Alice: 92 (A)
Ben: 81 (B)
Chloe: 74 (C)
Dev: 58 (F)
Ellis: 67 (D)
Class average: 74.4

*/

#include <iostream>
#include <string>
#include <array>
#include <iomanip>

constexpr int nStd = 5;

enum class Grade {
    A, B, C, D, F
};

char gradeToChar(Grade g) {
    switch (g) {
        case Grade::A: return 'A';
        case Grade::B: return 'B';
        case Grade::C: return 'C';
        case Grade::D: return 'D';
        case Grade::F: return 'F';
    }
    return '?'; 
}

Grade score2Grade(int score) {
    switch(score / 10){
        case 10:
            [[fallthrough]];
        case 9:
            return Grade::A;
            break;
        case 8:
            return Grade::B;
            break;
        case 7:
            return Grade::C;
            break;
        case 6:
            return Grade::D;
            break;
        default:
            return Grade::F;
    }
}

double classAverage(const std::array<int, nStd>& scores){
    int sum{0};
    for(int i{0}; i<nStd; i++){
        sum += scores[i];
    };
    return static_cast<double>(sum) / nStd;
}

int main() {
    std::array<std::string, nStd> Names{"Alice", "Ben", "Chloe", "Dev", "Ellis"};
    std::array<int, nStd> Scores{92, 81, 74, 58, 67};
    for (int i{0}; i < nStd; i++){
        Grade g = score2Grade(Scores[i]);
        std::cout << Names[i] << ": " << Scores[i] << " (" << gradeToChar(g) << ")\n";
    }
    std::cout << "Class average: " << classAverage(Scores) << '\n';
    return 0;

}


/*

 g++ Cap1.cpp -o Cap1.elf -Wall -Wextra -Werror -std=c++17
 ./Cap1.elf 

Alice: 92 (A)
Ben: 81 (B)
Chloe: 74 (C)
Dev: 58 (F)
Ellis: 67 (D)
Class average: 74.4

*/