#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    string x, y;
    cin >> n >> x >> y;

    // Convert the strings from base 'n' to base 10
    int sum = stoi(x, nullptr, n) + stoi(y, nullptr, n);

    cout << sum << endl;
    return 0;
}

Example Input/Output 1:
Input:
2
1010 11
Output:
13
Example Input/Output 2:
Input:
3
11 201
Output:
23
