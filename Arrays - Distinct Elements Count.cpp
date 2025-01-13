#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    unordered_set<int> x, y;

    for (int i = 0, z; i < a; i++) {
        cin >> z;
        x.insert(z);
    }
    for (int i = 0, z; i < b; i++) {
        cin >> z;
        y.insert(z);
    }

    unordered_set<int> p = x, q = y;
    for (int z : y) p.erase(z);
    for (int z : x) q.erase(z);

    cout << p.size() + q.size() << endl;
    return 0;
}

Example Input/Output 1:
Input:
4 5
1 5 9 10
22 5 12 95
Output:
4
Example Input/Output 2:
Input
3 2
100 200 300
201 600
Output:
5
