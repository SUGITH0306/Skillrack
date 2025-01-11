#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m[20][20]; // Maximum size is 20x20 as per constraints
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    // Corner elements
    int s = m[0][0] + m[0][n - 1] + m[n - 1][0] + m[n - 1][n - 1];

    cout << s << endl;
    return 0;
}
