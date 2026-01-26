#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter 3 numbers: " << std::endl;
    std::cin >> a >> b >> c;
    
    if (a < b + c && b < a + c && c < a + b)
        std::cout << "Yes, a triangle can be formed with side lengths "
        << a << ", " << b << ", and " << c << std::endl;
    else
        std::cout << "No, a triangle cannot be formed with side lengths "
        << a << ", " << b << ", and " << c << std::endl;
}