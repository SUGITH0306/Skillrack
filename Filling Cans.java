import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt(), b = s.nextInt(), c = s.nextInt(), steps = 0;

        if ((c > a && c > b) || (c % 2 != 0 && a % 2 == 0 && b % 2 == 0) || Math.abs(a - b) < c) {
            System.out.println(-1);
        } else {
            while (a - b >= c) {
                steps++;
                a -= b;
                if (a == c) break;
            }
            System.out.println(steps * 2);
        }
    }
}

Example 1:
Input
5
2
3
Output:
2

Example 2:
Input:
2
3
4
Output:
-1
