#include <iostream>
#include <algorithm> 

int main() {
    int n1, n2, hcf, lcm;
    std::cin >> n1 >> n2;

    // Calculate HCF using the __gcd function
    hcf = std::__gcd(n1, n2);

    // Calculate LCM using the formula LCM = (n1 * n2) / HCF
    lcm = (n1 / hcf) * n2;

    // Print the difference between LCM and HCF
    std::cout << lcm - hcf << std::endl;

    return 0;
}

Example 1:
Input:
30
45
Output:
75
Example 2:
Input:
100
120
Output:
580
