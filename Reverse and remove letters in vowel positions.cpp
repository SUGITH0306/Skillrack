#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

int main() {
    std::string in, v = "aeiouAEIOU";
    std::getline(std::cin, in);
    std::unordered_set<int> p;
    for (int i = 0; i < in.length(); i++) if (v.find(in[i]) != std::string::npos) p.insert(i);
    std::string r = in; 
    std::reverse(r.begin(), r.end());
    std::string res;
    for (int i = 0; i < r.length(); i++) if (!p.count(i)) res += r[i];
    std::cout << res << std::endl;
    return 0;
}

Example 1:
Input:
environment
Output:
nenrine
Example 2:
Input:
pond
Output:
dop
