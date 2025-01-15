#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool f = true;
    for (size_t i = 0; i < s.length(); i++) {
        if (isspace(s[i])) f = true;
        else if (f) {
            s[i] = toupper(s[i]);
            f = false;
        }
    }
    cout << s << endl;
    return 0;
}

Example Input/Output 1:
Input:
She is     happy. 
Output:
She Is     Happy. 
Example Input/Output 2:
Input:
jolN tHE ParTY
Output:
JolN THE ParTY
