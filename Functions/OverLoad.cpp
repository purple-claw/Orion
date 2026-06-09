/*
Write an overloaded function double area that computes area for two different shapes:
area(double radius)
— area of a circle: 3.14159 * radius * radius

area(double length, double width)
— area of a rectangle: length * width
In main, test both:

Circle with radius 5.0
Rectangle with length 4.0 and width 6.5

Print results with clear labels.
*/

#include <iostream>

double area(double rad){
    double pi{3.14159};
    return pi * rad * rad;
}

double area(double len, double wdt){
    return len * wdt;
}

int main(){
    double radius{5.0};
    double length{4.0};
    double width{6.5};
    double cir{area(radius)};
    double rect{area(length, width)};
    std::cout << "Area of Circle is " << cir << " Meter Square" << '\n';
    std::cout << "Area of Rectangle is " << rect << " Meter Square" << '\n';
    return 0;
}


/*

g++ OverLoad.cpp -o Ovld -Wall -Wextra -Werror -std=c++17
./Ovld 
Area of Circle is 78.5397 Meter Square
Area of Rectangle is 26 Meter Square

*/