#include <string>
#include <iostream>

int main(){
    std::string st{"one tow one three tow one tow three one"};
    size_t pos{st.find("one", 0)};
    while (pos != std::string::npos){
        std::cout << "Found at Index : " << pos << '\n';
        pos = st.find("one", pos+1);
    }
    return 0;
}