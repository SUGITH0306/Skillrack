#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, steps = 0;
    cin >> a >> b >> c;

    if ((c > a && c > b) || (c % 2 != 0 && a % 2 == 0 && b % 2 == 0) || abs(a - b) < c) {
        cout << -1 << endl;
    } else {
        while (a - b >= c) {
            steps++;
            a -= b;
            if (a == c) break;
        }
        cout << steps * 2 << endl;
    }

    return 0;
}

Example 1:
Input
5
2
3
Output:
2

Example 2:
Input:
2
3
4
Output:
-1
