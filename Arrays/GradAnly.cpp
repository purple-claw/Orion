/*
Exercise 1 — Grade Analyzer
Declare a std::array of 8 integer scores: {72, 85, 91, 60, 78, 95, 88, 74}.
Write a program that prints:

All scores
The highest score
The lowest score
The average (as a double, correctly)
How many scores are above the average
*/

#include <iostream>
#include <algorithm>
#include <array>

int main(){
    std::array<int, 8> scrs{72, 85, 91, 60, 78, 95, 88, 74};
    for (int s:scrs){
        std::cout << "Scores are : " << s << '\n';
    }

    int mxVal{scrs[0]};
    for (int s:scrs) {
        if (s > mxVal) { mxVal = s; }
    }
    std::cout << "The Highest Score : " << mxVal << '\n';

    int mnVal{scrs[0]};
    for (int s:scrs) {
        if (s < mnVal) { mnVal = s; }
    }
    std::cout << "The Lowest Score : " << mnVal << '\n';

    int sum{0};
    for (int s:scrs) { sum += s; }
    double avg{static_cast<double>(sum) / static_cast<int>(scrs.size())};
    std::cout << "The Average is : " << avg << '\n';

    int cntr{0};
    for (int x:scrs){
        if (x > avg){
            cntr += 1;
        }
    }
    std::cout << "No. Of Scores That are above the Average is : " << cntr << '\n';
    return 0;
}

/*
Output : 
Scores are : 72
Scores are : 85
Scores are : 91
Scores are : 60
Scores are : 78
Scores are : 95
Scores are : 88
Scores are : 74
The Highest Score : 95
The Lowest Score : 60
The Average is : 80.375
No. Of Scores That are above the Average is : 4
*/