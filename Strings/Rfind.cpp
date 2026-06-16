#include <string>
#include <iostream>

void gtStr(std::string nm){
    size_t st{nm.find("name:"+5)};
    size_t ed{nm.find(" ", st)};
    std::string tmp{nm.substr(st, ed - st)};
    std::cout << "Name is " << tmp << '\n';
}

int main(){
    std::string st{"name:Orion age:25"};
    gtStr(st);
    // size_t pos{st.rfind("one")};

    // if (pos != std::string::npos){
    //     std::cout << "Found at Index : " << pos << '\n';
    // } else {
    //     std::cout << "Not Found\n";
    // }
    // return 0;
}