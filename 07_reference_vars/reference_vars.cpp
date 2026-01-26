#include <iostream>

void add_five(int& num);

int main() {
    int a = 10;
    int& a_ref = a;

    a += 10;

    std::cout << a << ' ' << a_ref << std::endl;

    a_ref *= 10;
    std::cout << a << ' ' << a_ref << std::endl;

    add_five(a);
    std::cout << a << ' ' << a_ref << std::endl;

    int b = 5;
    a_ref = b;
    b += 2;
    std::cout << a_ref;

    return 0;
}

void add_five(int& num) {
    num += 5;
}