#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.2f\n", d);

    return 0;
}

Example 1:
Input:
0 4
3 0
Output:
5.00
Example 2:
Input:
2 2
14 7
Output:
13.00
Example 3:
Input:
0 0
3 3
Output:
4.24
