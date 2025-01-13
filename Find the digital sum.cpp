#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N > 9) {
        int sum = 0;
        while (N > 0) {
            sum += N % 10;
            N /= 10;
        }
        N = sum;
    }
    cout << N << endl;
    return 0;
}

Example 1:
Input:
45102
Output:
3
Example 2:
Input:
22311
Output:
9
Example 3:
Input:
9879871
Output:
4
