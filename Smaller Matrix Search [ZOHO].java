import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt(), M = s.nextInt();
        int[][] A = new int[N][N], B = new int[M][M];
        for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) A[i][j] = s.nextInt();
        for (int i = 0; i < M; i++) for (int j = 0; j < M; j++) B[i][j] = s.nextInt();
        
        boolean f = false;
        for (int i = 0; i <= N - M && !f; i++) 
            for (int j = 0; j <= N - M && !f; j++) {
                boolean m = true;
                for (int x = 0; x < M && m; x++) 
                    for (int y = 0; y < M && m; y++) 
                        if (A[i+x][j+y] != B[x][y]) m = false;
                if (m) f = true;
            }
        System.out.println(f ? "TRUE" : "FALSE");
    }
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
