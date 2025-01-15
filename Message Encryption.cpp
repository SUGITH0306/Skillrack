#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    int c;
    getline(cin, s);
    cin >> c;

    int r = s.length() / c;  // Number of rows
    vector<vector<char>> m(r, vector<char>(c));
    int idx = 0;

    // Fill the matrix row by row
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            m[i][j] = s[idx++];
        }
    }

    // Reverse the characters in even rows (1-based index)
    for (int i = 1; i < r; i += 2) {
        for (int j = 0, k = c - 1; j < k; j++, k--) {
            char t = m[i][j];
            m[i][j] = m[i][k];
            m[i][k] = t;
        }
    }

    // Collect the result by traversing column-wise
    string res = "";
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            res += m[i][j];
        }
    }

    // Print the final result
    cout << res << endl;

    return 0;
}

Example 1:
Input:
midinadiazne
3
Output:
madeinindiaz
Example 2:
Input:
loaesfbnaiordilertenrdhdw
5
Output:
lionroaredandthebirdsflew
