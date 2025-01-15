#include <iostream>
#include <string>
#include <set>

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;

    std::set<char> u1(s1.begin(), s1.end()), u2(s2.begin(), s2.end());

    if (u1 == u2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

Example 1:
Input:
read
dear
Output:
YES
Example 2:
Input:
record
decoder
Output:
YES
Example 3:
Input:
energy
synergy
Output:
NO
