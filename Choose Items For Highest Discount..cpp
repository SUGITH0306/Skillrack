#include <iostream>
#include <sstream>
#include <string>
#include <limits>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Handle the newline character after the integer input

    string r = "";
    double m = numeric_limits<double>::max();

    while (n-- > 0) {
        string l;
        getline(cin, l);
        stringstream ss(l);

        string a, b, c;
        ss >> a >> b >> c;

        if (b.empty() || c.empty()) {
            continue; // Skip malformed lines
        }

        try {
            double p = stod(b);
            double q = stod(c);
            double v = (p * q) / 100;

            if (v < m) {
                m = v;
                r = a;
            }
        } catch (const invalid_argument &e) {
            continue; // Skip lines with invalid numbers
        }
    }

    if (r.empty()) {
        cout << "Invalid input" << endl;
    } else {
        cout << r << endl;
    }

    return 0;
}

Example Input/Output 1:
Input:
3
harddisk 4000 20
monitor 15000 10
laptop 30000 5
Output:
harddisk
