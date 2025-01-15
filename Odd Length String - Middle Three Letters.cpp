#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int mid = n / 2; // Index of the middle character

    // Extract and print the middle three letters
    cout << s.substr(mid - 1, 3) << endl;

    return 0;
}

Example Input/Output 1:
Input
level
Output:
eve
Example Input/Output 2:
Input:
manager
Output:
nag
