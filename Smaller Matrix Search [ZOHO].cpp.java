#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(N)), B(M, vector<int>(M));
    for (int i = 0; i < N * N; i++) cin >> A[i / N][i % N];
    for (int i = 0; i < M * M; i++) cin >> B[i / M][i % M];
    bool f = false;
    for (int i = 0; i <= N - M && !f; i++)
        for (int j = 0; j <= N - M && !f; j++) {
            bool m = true;
            for (int x = 0; x < M && m; x++)
                for (int y = 0; y < M && m; y++)
                    if (A[i + x][j + y] != B[x][y]) m = false;
            if (m) f = true;
        }
    cout << (f ? "TRUE" : "FALSE");
    return 0;
}

Example Input/Output 1:
Input:
3
2
4 5 9
1 3 5
8 2 4
3 5
2 4
Output:
TRUE
Example Input/Output 2:
Input:
3
2
4 5 9
1 3 5
8 2 4
4 5
1 4
Output:
FALSE
