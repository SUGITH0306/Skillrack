#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int x[m][n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> x[i][j];
    for (int j = 0; j < n; j++) {
        for (int i = m - 1; i >= 0; i--) cout << x[i][j] << " ";
        cout << endl;
    }
    return 0;
}

Example Input/Output 1:
Input:
2
3
4 5 9
1 3 5
Output:
1 4
3 5
5 9
Example Input/Output 2:
Input
4
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Output:
13 9 5 1
14 10 6 2
15 11 7 3
16 12 8 4
