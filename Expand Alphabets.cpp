#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, result = "";
    cin >> s;
    
    int num = 0; // To store the current number
    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0'); // Build the number (handles multi-digit numbers)
        } else {
            result += string(num, c); // Append `num` occurrences of character `c`
            num = 0; // Reset the number
        }
    }
    
    cout << result;
    return 0;
}

Example Input/Output 1:
Input:
4a5h
Output:
aaaahhhhh
Example Input/Output 2:
Input:
1k2b4k
Output:
kbbkkkk
