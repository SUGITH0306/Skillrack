#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isP(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    string l;
    getline(cin, l);

    vector<int> p, o, e;
    stringstream ss(l);
    int x;

    while (ss >> x) {
        if (isP(x)) p.push_back(x);
        else if (x % 2 == 0) e.push_back(x);
        else o.push_back(x);
    }

    sort(p.begin(), p.end());
    sort(o.begin(), o.end());
    sort(e.begin(), e.end());

    for (int v : p) cout << v << " ";
    for (int v : o) cout << v << " ";
    for (int v : e) cout << v << " ";
    cout << endl;

    return 0;
}

Example Input/Output 1:
Input:
4 5 9 22 11 2 15
Output:
2 5 11 9 15 4 22
Example Input/Output 2:
Input:
611953 494147 493137 493133 493138
Output:
493133 494147 611953 493137 493138
