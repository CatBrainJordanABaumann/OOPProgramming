
#include <iostream>
#include <cmath>
#include <vector>
void rotateLeft(std::vector<char>& v, int k);
int main(void) {
    std::vector<char> attend {'1', 'u', '3', '4', 'g', '6', 'r', 'j', 'y', 'j',
        'd', 'd', 'f', 'h', 's', 'd', 'f', '5', 'a', 'd', 'h', '6', 'j', 's', 'd', 'f',
        'j', '1', '2', 'z', 'g', 'd', '7', '3', 'k', 'o', '9', 's', 'j', 'd', 'f'};
        
    int n_rotations = pow((50 * 2 - 75 / 3 + 20 % 7 + 20 + 12 / 4), 3);
    rotateLeft(attend, n_rotations);
    
    for(int i = 0; i < 5; i++) {
        std::cout << attend.at(i);
    }
    std::cout << '\n';
    
    std::vector<char> test_vector;
    for (int i = 0; i < 79; i++)
        test_vector.push_back(i);    
    std::cout << '\n';
    
    return 0;
}

void rotateLeft(std::vector<char>& v, int k) {
    if (k == 0)
        return;
    k %= v.size();
    char temp = v.front();
    for (int i = 0; i < v.size() - 1; i++)
        v[i] = v[i + 1];
    v.back() = temp;
    rotateLeft(v, k - 1);
}