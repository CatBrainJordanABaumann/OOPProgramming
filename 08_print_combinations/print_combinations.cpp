#include <iostream>
#include <string>

constexpr char min_char = ' ', max_char = '`';

void print_combinations(int n);
void combinations_helper(std::string& s, int n, int i = 0);
int combination_index(const std::string& s);

int main() {
    print_combinations(2);
    return 0;
}

void print_combinations(int n) {
    std::string s(n, ' ');

    // Call the helper function
    combinations_helper(s, n, 0);
}

void combinations_helper(std::string& s, int n, int i) {
    if (i >= n) {
        std::cout << combination_index(s) + 1 << " - " << s << std::endl;
        return;
    }

    for (s[i] = min_char; s[i] <= max_char; s[i]++)
        combinations_helper(s, n, i + 1);
}

int combination_index(const std::string& s) {
    int result = 0;
    for (int i = s.size() - 1, p = 1; i >= 0; i--, p *= (max_char - min_char + 1))
        result += p * (s[i] - min_char);
    return result;
}