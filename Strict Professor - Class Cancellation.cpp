#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int f(const string &x) {
    int h, m;
    sscanf(x.c_str(), "%d:%d", &h, &m);
    return h * 60 + m;
}

int main() {
    int n, m, c = 0;
    cin >> n >> m;
    string t;
    cin >> t;

    int p = f(t);

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        if (f(x) <= p) c++;
    }

    cout << (c >= m ? "No" : "Yes") << endl;
    return 0;
}

Example Input/Output 1:
Input
5 3
9:30
9:30 9:38 9:31 9:32 9:31
Output:
Yes
Example Input/Output 2:
Input:
6 4
11:10
10:30 10:40 10:55 11:20 11:10 11:12
Output:
No
