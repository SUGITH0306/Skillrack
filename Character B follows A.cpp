#include <iostream>
#include <string>

int main() {
    std::string a, b, c;
    std::cin >> a >> b >> c;

    int t = 0;
    for (size_t i = 0; i < a.size() - 1; ++i) {
        if (a[i] == b[0] && a[i + 1] == c[0]) {
            ++t;
        }
    }

    std::cout << t << std::endl;
    return 0;
}

Example 1:
Input
malayalam
a
l
Output:
2
Example 2:
Input:
engine
n
Output:
1
