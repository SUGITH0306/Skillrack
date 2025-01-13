#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int v = i;
        for (int j = n; j >= i; j--) {
            cout << v << " ";
            v += j;
        }
        cout << endl;
    }
    return 0;
}

Example Input/Output 1:
Input:
5
Output:
1 6 10 13 15
2 7 11 14
3 8 12
4 9
5
Example Input/Output 2:
Input:
3
Output:
1 4 6
2 5
3
