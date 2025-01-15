#include <iostream>
#include <string>

int main() {
    std::string s;
    int x, y;
    std::cin >> s;
    std::cin >> x >> y;

    // Adjust positions to zero-based indexing
    x--;
    y--;

    // Check if characters at positions X and Y are the same
    if (s[x % s.length()] == s[y % s.length()]) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

Example 1:
Input:
icecream
4 10
Output:
YES
Example 2:
Input:
cake
2 12
Output:
NO
