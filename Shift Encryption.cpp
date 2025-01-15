#include <iostream>
#include <string>
using namespace std;

int main() {
    string m;
    int x, y;
    getline(cin, m);
    cin >> x >> y;

    string e = "";

    for (char c : m) {
        if (islower(c)) {
            if (c + x > 'z') {
                e += (char)(c + x - 26);
            } else {
                e += (char)(c + x);
            }
        } else if (isdigit(c)) {
            int d = c - '0' + y;
            e += to_string(d);
        } else {
            e += c;
        }
    }

    cout << e << endl;
    return 0;
}

Example 1:
Input:
call me at 10 p.m
2
1
Output:
ecnn og cv 21 r.o

Example 2:
Input:
credit 1 lakh
3
Output:
fuhglw 1 odnk

Example 3:
Input:
interview rita at 4pm
1
6
Output:
joufswjfx sjub bu 10qn
