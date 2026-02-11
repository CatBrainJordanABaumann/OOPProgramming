#include <iostream>

void rotateRight(const int src[], int dest[], int size, int k);


int main() {
    constexpr int MAX_SIZE = 7;
    int src_arr[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int dst_arr[MAX_SIZE];
    int r;
    std::cout << "How far to the right should be rotated? ";
    std::cin >> r;
    rotateRight(src_arr, dst_arr, MAX_SIZE, r);
    for (int i : dst_arr)
        std::cout << i << std::endl;

    return 0;
}


void rotateRight(const int src[], int dest[], int size, int k) {
    for (int i = 0; i < size; i++)
        dest[((i + k) % size + size) % size] = src[i];
}