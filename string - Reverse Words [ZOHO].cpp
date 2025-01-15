#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s, w;
    getline(cin, s);

    stringstream ss(s);
    vector<string> v;

    while (ss >> w) {
        v.push_back(w);
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i];
        if (i > 0) {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}
Example Input/Output 1:
Input:
Today is Friday
Output:
Friday is Today
Example Input/Output 2:
Input:
five six ten eleven
Output:
eleven ten six five
