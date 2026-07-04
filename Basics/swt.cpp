#include <iostream>

int main()
{
    int day{};
    std::cout << "Enter the Day : ";
    std::cin >> day;

    switch (day) {
    case 1: std::cout << "Monday\n";    break;
    case 2: std::cout << "Tuesday\n";   break;
    case 3: std::cout << "Wednesday\n"; break;
    case 4: std::cout << "Thursday\n";  break;
    case 5: std::cout << "Friday\n";    break;
    case 6: std::cout << "Saturday\n";  break;
    case 7: std::cout << "Sunday\n";    break;
    default: std::cout << "Invalid Day\n"; return 0;
    }
    
    switch (day) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        std::cout << "It is a Weekday\n";
        break;
    case 6:
    case 7:
        std::cout << "It is Weekend\n";
        break;
    }
    return 0;
}