#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++) {
        x += a[i][i];
        y += a[i][n - 1 - i];
    }
    cout << ((x < 0 && y > 0) ? abs(x + y) : abs(x - y));
    return 0;
}

Example Input/Output 1:
Input:
2
10 9
4 22
Output:
19
Example Input/Output 2:
Input:
2
-10 6
4 -22
Output:
22
