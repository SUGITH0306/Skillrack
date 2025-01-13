#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    double m = 0.0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double f, d;
        cin >> f >> d;

        double e = d / f;
        if (e > m) {
            m = e;
            c = i;
        }
    }

    cout << c << endl;
    return 0;
}

Example 1:
Input:
3
10 300
20 550
15 460
Output:
3
Example 2:
Input:
5
10 200
20 400
10 210
20 430
15 250
Output:
4
