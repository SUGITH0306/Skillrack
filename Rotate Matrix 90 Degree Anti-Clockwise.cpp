#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int x[m][n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> x[i][j];
    for (int j = n - 1; j >= 0; j--) {
        for (int i = 0; i < m; i++) cout << x[i][j] << " ";
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
9 5
5 3
4 1
Example Input/Output 2:
Input
4
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Output:
4 8 12 16
3 7 11 15
2 6 10 14
1 5 9 13 
