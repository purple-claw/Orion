/*

Capstone 2 — "Log Line Parser" (string-heavy integration)

Parse and react to raw log lines.

Requirements:

A std::array<std::string, N> (N ≥ 5) of lines shaped like "LEVEL:CODE:VALUE", e.g. "WARN:104:87.5".
enum class Level { Info, Warn, Error };
A function that splits one line (via std::stringstream or .find/.substr), converts the level text to the Level enum, CODE via std::stoi, VALUE via std::stod.
A switch on Level (fully qualified, no default:) picking a message prefix per level.
Process all lines with a while loop (manual form, not range-based), printing:

[WARNING] code 104, value 87.5
[!! ERROR !!] code 210, value 12
[INFO] code 1, value 100

Must genuinely use: string parsing, stringstream/find/substr, stoi/stod, enum class, switch, a while loop, functions.

*/

#include <iostream>
#include <string>
#include <array>
#include <sstream>

constexpr int nStd{5};
enum class Level{
    Info,
    Warn,
    Error
};

struct LogEntry {
    Level level;
    int code;
    double value;
};

Level textToLevel(const std::string &lvl)
{
    if (lvl == "INFO")
        return Level::Info;
    if (lvl == "WARN")
        return Level::Warn;
    if (lvl == "ERROR")
        return Level::Error;
    return Level::Info;
}

LogEntry split2Level(const std::string &sr)
{
    std::stringstream str(sr);
    std::string lvl;
    std::string a;
    std::string b;

    std::getline(str, lvl, ':');
    std::getline(str, a, ':');
    std::getline(str, b);

    Level level{textToLevel(lvl)};
    int code{std::stoi(a)};
    double val{std::stod(b)};
    return {level, code, val};
}

std::string levelPrefix(Level level)
{
    switch (level)
    {
        case Level::Info:
            return "[INFO]";
        case Level::Warn:
            return "[WARNING]";
        case Level::Error:
            return "[!! ERROR !!]";
    }
    return "?";
}

int main(){
    std::array<std::string, nStd> lines{
        "WARN:104:87.5",
        "ERROR:210:12",
        "INFO:1:100",
        "ERROR:210:78.56",
        "WARN:104:90.1"
    };
    int i{0};
    while (i < nStd)
    {
        LogEntry entry{split2Level(lines[i])};
        std::cout << levelPrefix(entry.level) << " code " << entry.code << ", value " << entry.value << '\n';
        ++i;
    }
    return 0;
}

/*

 g++ Cap2.cpp -o Cap2.elf -Wall -Wextra -Werror -std=c++17
 ./Cap2.elf

[WARNING] code 104, value 87.5
[!! ERROR !!] code 210, value 12
[INFO] code 1, value 100
[!! ERROR !!] code 210, value 78.56
[WARNING] code 104, value 90.1

*/