#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string i;
    getline(cin, i);
    vector<string> s;
    size_t p = 0;
    while (p != string::npos) {
        p = i.find(' ');
        s.push_back(i.substr(0, p));
        i.erase(0, (p == string::npos ? i.length() : p + 1));
    }

    int x = stoi(s[0].substr(1)), y = stoi(s[1].substr(1));
    for (size_t j = 2; j < s.size(); ++j) {
        int d = stoi(s[j].substr(1));
        if (s[j][0] == 'N') y += d;
        else if (s[j][0] == 'E') x += d;
        else if (s[j][0] == 'S') y -= d;
        else x -= d;
    }
    cout << "x" << x << " y" << y << endl;
    return 0;
}

Example Input/Output:
If the input string is x2 yl N3 E2 Sl the output must be
x4 y3
If the input string is x-2 y3 Nl W3 the output must be
x-5 y4
