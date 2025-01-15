#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int c = 0;

    // Read the entire line including spaces
    getline(cin, S);

    // Iterate through the string to count words
    for (size_t i = 0; i < S.length(); i++) {
        if ((i == 0 || S[i - 1] == ' ') && S[i] != ' ') {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}

Example Input/Output 1:
Input:
I like tea
Output:
3
Example Input/Output 2:
Input:
I like coffee very much
Output:
5
