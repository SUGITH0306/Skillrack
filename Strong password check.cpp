#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    cin >> p;

    if (p.length() < 8 || p.length() > 25) {
        cout << "INVALID" << endl;
        return 0;
    }

    bool a = false, b = false, c = false, d = false;
    string special = "#!_$@";

    for (char x : p) {
        if (special.find(x) != string::npos) a = true;
        if (isdigit(x)) b = true;
        if (isupper(x)) c = true;
        if (islower(x)) d = true;
    }

    if (a && b && c && d) cout << "VALID" << endl;
    else cout << "INVALID" << endl;

    return 0;
}

Example 1:
Input:
kiC_3bOx3r
Output:
VALID
Example 2:
Input:
m@d31nindia
Output:
INVALID
Example 3:
Input:
M1kT!sO
Output:
INVALID 
