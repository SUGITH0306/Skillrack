#include <iostream>
#include <string>
#include <algorithm> // Include this for reverse
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    string s = to_string(n);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int main() {
    int N;
    cin >> N;

    int P = N + 1; // Start checking from the next number
    while (!isPalindrome(P)) {
        P++;
    }

    cout << P << endl;
    return 0;
}

Example 1:
Input:
909
Output:
919
Example 2:
Input:
2131
Output:
2222
