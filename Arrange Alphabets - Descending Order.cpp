#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> unique_chars(s.begin(), s.end()); // Remove duplicates
    s = string(unique_chars.begin(), unique_chars.end());
    sort(s.rbegin(), s.rend()); // Sort string in descending order

    cout << s << endl;
    return 0;
}

Example Input/Output 1:
Input:
cake
Output:
keca
Example Input/Output 2:
Input:
innovation
Output:
vtonia
