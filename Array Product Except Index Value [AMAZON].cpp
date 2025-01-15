#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    // Split the input string into integers
    stringstream ss(input);
    vector<int> x;
    int num;
    while (ss >> num) {
        x.push_back(num);
    }

    int n = x.size(), p = 1;

    // Calculate the product of all elements
    for (int v : x) {
        p *= v;
    }

    // Output the result
    for (int i = 0; i < n; i++) {
        cout << p / x[i];
        if (i < n - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}

Example Input/Output 1:
Input:
1 2 3 4 5
Output:
120 60 40 30 24
Example Input/Output 2:
Input:
10 5 4
Output:
20 40 50
Example Input/Output 3:
Input:
21 100
Output:
100 21
