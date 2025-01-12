#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    
    int t = x, t1 = y, s = 0, s1 = 0, s2 = 0;
    
    while (x) {
        s = (s * 10) + (x % 10);
        x /= 10;
    }
    
    while (y) {
        s1 = (s1 * 10) + (y % 10);
        y /= 10;
    }
    
    int a = s + s1;
    
    while (a) {
        s2 = (s2 * 10) + (a % 10);
        a /= 10;
    }
    
    std::cout << s2 << std::endl;
    
    return 0;
}

Example 1:
Input:
24
1
Output:
34
Example 2:
Input:
305
794
Output:
1
