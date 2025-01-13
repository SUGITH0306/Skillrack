import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        int m = s.nextInt(), n = s.nextInt();
        int[][] x = new int[m][n];
        for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) x[i][j] = s.nextInt();
        for (int j = 0; j < n; j++) {
            for (int i = m - 1; i >= 0; i--) System.out.print(x[i][j] + " ");
            System.out.println();
        }
    }
}

Example Input/Output 1:
Input:
2
3
4 5 9
1 3 5
Output:
1 4
3 5
5 9
Example Input/Output 2:
Input
4
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Output:
13 9 5 1
14 10 6 2
15 11 7 3
16 12 8 4
