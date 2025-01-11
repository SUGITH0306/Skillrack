#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];
    cin.getline(a, 100);
    int n = strlen(a), c = 0, j = 0;
    for (int i = 0; i < n && a[i] != '_'; i++) b[j++] = a[i], c++;
    for (int i = c - 1; i >= 0; i--) cout << b[i];
    for (int i = c; i < n; i++) cout << a[i];
    return 0;
}
