#include <string>
#include <iostream>

int main(){
    std::string st{"What the Fuck"};
    size_t pos{st.find("the")};

    if (pos != std::string::npos){
        std::cout << "Found at Index : " << pos << '\n';
    } else {
        std::cout << "Not Found\n";
    }

    return 0;
}