#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string b;
    std::getline(std::cin, b);
    
    for (size_t i = 0; i < b.length(); ++i) {
        if (std::islower(b[i])) b[i] = std::toupper(b[i]);
        else if (std::isupper(b[i])) b[i] = std::tolower(b[i]);
    }
    
    std::cout << b << std::endl;
    return 0;
}

Example 1:
Input:
GooD mORniNg12_3
Output:
good MorNlnG12_3
Example 2:
Input:
R@1nBow
Output:
r@1NbOW
