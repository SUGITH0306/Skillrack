#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());  // Sort the array

    int s = 0;
    for (int i = 0; i < m; i++) {
        s += a[i];  // Sum the first m elements
    }

    cout << s << endl;
    return 0;
}

Example Input/Output 1:
Input:
5 2
9 2 1 5 4
Output:
3
