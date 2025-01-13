import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        for (int i = 1; i <= n; i++) {
            int v = i;
            for (int j = n; j >= i; j--) {
                System.out.print(v + " ");
                v += j;
            }
            System.out.println();
        }
    }
}

Example Input/Output 1:
Input:
5
Output:
1 6 10 13 15
2 7 11 14
3 8 12
4 9
5
Example Input/Output 2:
Input:
3
Output:
1 4 6
2 5
3
