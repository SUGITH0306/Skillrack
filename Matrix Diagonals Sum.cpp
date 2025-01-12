#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, sum = 0; cin >> n;
    vector<vector<int>> m(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    for (int i = 0; i < n; i++) {
        sum += m[i][i];
        if (i != n - i - 1) sum += m[i][n - i - 1];
    }
    cout << sum;
    return 0;
}

Example Input/Output 1:
Input:
2
10 9
4 22
Output:
45
Example Input/Output 2:
Input:
3
5 10 11
79 6 12
9 21 45
Output:
76
