#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    string l, p;
    getline(cin, l);
    double d = 0, t = 0;
    stringstream s(l);
    while (s >> p) {
        size_t x = p.find('@');
        d += stod(p.substr(0, x));
        t += stod(p.substr(x + 1));
    }
    cout << fixed << setprecision(2) << d / t << " kmph\n";
    return 0;
}

Input:
60@2 120@3
Output:
36.00 kmph
