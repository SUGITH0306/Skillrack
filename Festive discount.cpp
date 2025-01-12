#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;
    
    double t = 0;
    for (int i = 0; i < n; ++i) {
        double p;
        std::cin >> p;
        double d = (p >= 1000) ? 0.5 : (p > 500) ? 0.25 : (p > 400) ? 0.2 : 0;
        t += p * (1 - d);
    }
    
    if (t > 2000) {
        t -= 100;
    }
    
    std::cout << std::fixed << std::setprecision(2) << t << std::endl;

    return 0;
}

Input
3
1000
1200
400
Output:
1500.00
Example 2:
Input:
5
450
500
2000
1600
300
Output:
2760.00
