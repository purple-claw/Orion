/*
Capstone 3 — "Traffic Light Simulator" (most comprehensive)

Simulate a light cycling through states, then deliberately trigger the Topic 1.17 danger.

Requirements:

enum class Light : std::uint8_t { Red, Yellow, Green };

Light next(Light current) — returns the next light in the cycle (Red→Green→Yellow→Red) via switch, fully-qualified case labels, no default:.

In main, starting from Red, cycle 6 times in a for loop, printing each state's name and its sizeof.

Then deliberately create static_cast<Light>(9) — an invalid state — run it through a switch with no default:, and print the raw numeric value afterward. The invalid-state switch must genuinely produce no matching output, not something faked.

Must genuinely use: enum class with a custom underlying type, exhaustive switch, a for loop, functions, static_cast in both directions, sizeof.

Expected shape:

Cycle 1: Red (1 bytes)
...
Cycle 6: Yellow (1 bytes)
raw value: 9

*/

#include <cstdint>
#include <iostream>
#include <string>

enum class Light : std::uint8_t
{
    Red,
    Yellow,
    Green
};

Light next(Light current)
{
    switch (current)
    {
        case Light::Red:
            return Light::Green;
        case Light::Green:
            return Light::Yellow;
        case Light::Yellow:
            return Light::Red;
    }
    return Light::Red;
}

std::string lightName(Light current)
{
    switch (current)
    {
        case Light::Red:
            return "Red";
        case Light::Green:
            return "Green";
        case Light::Yellow:
            return "Yellow";
    }
    return "?";
}

int main()
{
    Light current{Light::Red};
    for (int i{1}; i <= 6; ++i)
    {
        std::cout << "Cycle " << i << ": " << lightName(current) << " (" << sizeof(current) << " bytes)" << '\n';
        current = next(current);
    }

    Light bad{static_cast<Light>(9)};
    switch (bad)
    {
        case Light::Red:
            std::cout << "saw red" << '\n';
            break;
        case Light::Green:
            std::cout << "saw green" << '\n';
            break;
        case Light::Yellow:
            std::cout << "saw yellow" << '\n';
            break;
    }
    std::cout << "raw value: " << static_cast<int>(bad) << '\n';

    return 0;
}

/*

 g++ Cap3.cpp -o Cap3.elf -Wall -Wextra -Werror -std=c++17
 ./Cap3.elf

Cycle 1: Red (1 bytes)
Cycle 2: Green (1 bytes)
Cycle 3: Yellow (1 bytes)
Cycle 4: Red (1 bytes)
Cycle 5: Green (1 bytes)
Cycle 6: Yellow (1 bytes)
raw value: 9

*/
