#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int c(const string& z) {
    int n = stoi(z);
    if (n < 0) {
        cout << "INVALIDINPUT";
        exit(0);
    }
    return n;
}

int main() {
    string line;
    getline(cin, line);
    istringstream sp(line);
    vector<string> p;
    string temp;
    while (sp >> temp) p.push_back(temp);

    getline(cin, line);
    istringstream sq(line);
    vector<string> q;
    while (sq >> temp) q.push_back(temp);

    int x = 0, y = 0;
    for (const string& z : p) x += c(z);
    for (const string& z : q) y += c(z);

    double u = (double) x / p.size(), v = (double) y / q.size();
    cout << ((u > v || (u == v && x > y)) ? x : y);
    return 0;
}

Example 1:
Input:
20 30 40
50 10
Output:
90
Example 2:
Input:
50 60 10
50 40
Output:
90
Example 3:
Input:
40 42 60
0 100 56
Output:
156
Example 4:
Input:
42 -10
22 45
Output:
INVALIDINPUT
