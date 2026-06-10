#include <string>
#include <iostream>

int main(){
    std::string st{"one two one three one"};
    size_t pos{st.rfind("one")};

    if (pos != std::string::npos){
        std::cout << "Found at Index : " << pos << '\n';
    } else {
        std::cout << "Not Found\n";
    }
    return 0;
}