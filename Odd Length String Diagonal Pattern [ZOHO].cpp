#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = s.length();
    
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            if (j == i) {
                cout << s[j];
            } else if (j == l - i - 1) {
                cout << s[j];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

Input:
cry
Output:
c y
 r
c y 
Example Input/Output 2:
Input:
tiger
Output:
t   r
 i e
  g
 i e
t   r
