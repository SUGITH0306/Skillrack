#include <iostream>
using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int d = b - a; // Common difference
    int t = a + (n - 1) * d; // Nth term formula

    cout << t << endl;
    return 0;
}

Input
5 10 15
6
Output:
30
Example Input/Output 2:
Input:
1 4 7
5
Output:
13
