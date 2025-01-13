#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string n;
    cin >> n;

    int i = n.length() - 1;
    while (i > 0 && n[i - 1] >= n[i]) i--;

    if (i == 0) {
        cout << n << endl;
        return 0;
    }

    int j = n.length() - 1;
    while (n[j] <= n[i - 1]) j--;

    // Swap characters at positions i-1 and j
    swap(n[i - 1], n[j]);

    // Reverse the substring from i to the end
    reverse(n.begin() + i, n.end());

    cout << n << endl;
    return 0;
}

Example Input/Output 1:
Input:
12
Output:
21
Example Input/Output 2:
Input:
195
Output:
519
