#include <iostream>

enum class TrafficLight { Red, Yellow, Green };
enum class Paint { Red, Blue, Green };

int main(){
    TrafficLight lgt{TrafficLight::Red};
    Paint col{Paint::Red};

    if (lgt == TrafficLight::Red){
        std::cout << "Light is Red\n";
    }
    if (col == Paint::Red){
        std::cout << "paint is Red\n";
    }
    return 0;
}