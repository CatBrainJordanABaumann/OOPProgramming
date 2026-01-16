#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    
    std::cout << str << std::endl;
    std::cout << "The string's size is " << str.size() << std::endl;
    
    str += " World!";
    std::cout << str << std::endl;
    std::cout << "The string's size is " << str.size() << std::endl;
    
    return 0;
}