#include <iostream>
#include <iomanip>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<int> dist(1, 6);

    int total = 0;
    for (int i = 0; i < 3; i++) {
        int value1 = dist(eng);
        total += value1;
        int value2 = dist(eng);
        total += value2;
        std::cout << "Roll " << i << ": " << value1 << " + " << value2 << " = " << value1 + value2 << std::endl;
    }

    std::cout << "Average Roll: " << std::setprecision(5) << total / 3.f << std::endl
        << "Expected Average: " << (dist.a() + dist.b()) * 0.5f * 3 << std::endl;
}