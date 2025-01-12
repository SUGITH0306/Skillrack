#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s; cin >> s;
    set<char> u(s.begin(), s.end());
    string r(u.begin(), u.end());
    sort(r.rbegin(), r.rend());
    cout << r;
    return 0;
}

Example input and output:
If the input is "cake", the output should be "keca"
If the input is "innovation", the output should be "vtonia"
(n or o or i should not be repeated)
