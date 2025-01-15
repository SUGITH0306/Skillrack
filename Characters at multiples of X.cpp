#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int x;

    // Read the string S and integer X
    getline(cin, s);
    cin >> x;

    // Iterate through the string and print characters at positions which are multiples of X
    for (int i = x - 1; i < s.length(); i += x) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
