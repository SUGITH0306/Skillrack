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
