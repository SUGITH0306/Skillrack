#include <iostream>
#include <string>
using namespace std;

int main() {
    string ch;
    getline(cin, ch);

    int len = ch.length();
    bool found = false;

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (ch[i] == ch[j]) {
                cout << ch[j] << endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    return 0;
}

Example Input/Output 1:
Input:
abcdexyzbwqpoolj
Output:
b
