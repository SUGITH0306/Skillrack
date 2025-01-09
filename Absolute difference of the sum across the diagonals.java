import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt(), a[][] = new int[n][n], x = 0, y = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) 
                a[i][j] = s.nextInt();
        for (int i = 0; i < n; i++) {
            x += a[i][i];
            y += a[i][n - 1 - i];
        }
        System.out.println(x < 0 && y > 0 ? Math.abs(x + y) : Math.abs(x - y));
    }
}
