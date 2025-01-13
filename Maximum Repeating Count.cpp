#include <iostream>
#include <sstream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
    string l;
    getline(cin, l);
    stringstream s(l);
    unordered_map<int, int> m;
    int n;

    while (s >> n) {
        m[n]++;
    }

    int c = 0, r = INT_MAX;

    for (const auto& e : m) {
        int k = e.first, v = e.second;
        if (v > c || (v == c && k < r)) {
            c = v;
            r = k;
        }
    }

    cout << r << endl;

    return 0;
}

Example 1:
Input:
10 20 30 20 30 10 30 20
Output:
20
Example 2:
Input:
1 2 3 5 9 2 9 6 9
Output:
9
