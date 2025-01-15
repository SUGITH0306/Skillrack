#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string a, b;
    
    // Input the two lines
    getline(cin, a);
    getline(cin, b);

    // Convert the input lines to integer vectors
    stringstream sa(a), sb(b);
    vector<int> x, y;
    int A = 0, B = 0, n;

    while (sa >> n) x.push_back(n);
    while (sb >> n) y.push_back(n);

    // Compare corresponding values and update points
    for (size_t i = 0; i < x.size(); i++) {
        if (x[i] > y[i]) A += 3;  
        else if (y[i] > x[i]) B += 3;  
        else { A += 1; B += 1; }  
    }

    // Output the points
    cout << A << " " << B << endl;

    return 0;
}

Example Input/Output 1:
Input:
3 5 1
3 2 0
Output:
7 1
