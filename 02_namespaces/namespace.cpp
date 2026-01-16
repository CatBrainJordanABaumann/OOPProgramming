/*
    01/14/2026
    Working with namespaces
*/

#include <iostream>

// Create a namespace
namespace first {
    int a;
}

namespace second {
    int a;
}

int main() {
    first::a = 10;
    second::a = 25;
    std::cout << first::a << std::endl;
    std::cout << second::a << std::endl;

    return 0;
}