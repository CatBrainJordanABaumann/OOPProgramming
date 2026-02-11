#include <iostream>
#include <vector>

void print(const std::vector<int>& v);

int main() {
    std::vector<int> v;

    std::vector<int> v2 {1, 2, 1000, 4, 5, 6};
    print(v2);

    std::vector<int> v3(5, 10);
    print(v3);

    std::vector<int> v4(v2);
    print(v4);

    std::cout << "v2 first " << v2.front() << std::endl;
    std::cout << "v2 last " << v2.back() << std::endl;

    std::cout << "\nTest:" << std::endl;
    std::cout << *v2.begin() + 2 << std::endl;
    std::cout << (*v2.begin()) + 2 << std::endl;
    std::cout << *(v2.begin() + 2) << '\n' << std::endl;

    std::vector<int> v5{1, 2, 3, 4, 5, 6, 7, 8, 9};
    v5.insert(v5.begin() + 8, 777);
    print(v5);
}

void print(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << ' ';
    std::cout << std::endl;
}