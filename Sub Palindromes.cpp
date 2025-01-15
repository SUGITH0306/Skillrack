#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    int n = s.length(), count = 0;

    // Check all substrings of length >= 2
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            string sub = s.substr(i, j - i + 1);  // Extract substring
            if (sub.length() >= 2 && isPalindrome(sub)) {
                count++;
            }
        }
    }

    cout << count << endl;  // Output the count of sub palindromes
    return 0;
}

Example 1:
Input:
everest
Output:
2
Example 2:
Input:
abccbaab
Output:
5
