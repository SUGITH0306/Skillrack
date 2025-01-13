#include <iostream>
using namespace std;

int main() {
    int n, sum = 1;
    cin >> n;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }

    cout << sum << endl;
    return 0;
}

Sample Input/Output:
Example 1:
Input
2
Output:
1
Example 2:
Input:
20
Output:
22
