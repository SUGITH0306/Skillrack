#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a, t, w1, w2, l1, l2, d;
    cin >> a >> t >> w1 >> w2;
    l1 = (a / 5) / w1;
    l2 = (t / 5) / w2;
    d = abs(l1 - l2);
    cout << fixed << setprecision(2) << d << endl;
    return 0;
}

Example Input/Output 1:
Input:
100000 80000
100 80
Output:
0.00

Example Input/Output 2:
Input:
17500 40000
50 80
Output:
30.00
