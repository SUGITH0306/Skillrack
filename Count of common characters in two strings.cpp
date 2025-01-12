#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    getline(cin, x);
    getline(cin, y);
    int c = 0;
    for (char z : x) {
        size_t pos = y.find(z);
        if (pos != string::npos) {
            c++;
            y.erase(pos, 1);
        }
    }
    cout << c;
    return 0;
}

Example 1:
Input:
china
india
Output:
3
Example 2:
Input:
energy
every
Output:
4 
