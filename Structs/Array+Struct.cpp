#include <iostream>
#include <string>
#include <array>

struct Student
{
    std::string name;
    int score;
};

int main()
{
    std::array<Student, 3> students{{
        {"Alice", 92},
        {"Ben", 81},
        {"Chloe", 74}
    }
    };

    for (const Student& s : students)
    {
        std::cout << s.name << ": " << s.score << "\n";
    }

    return 0;
}