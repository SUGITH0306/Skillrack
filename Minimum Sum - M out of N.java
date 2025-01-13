import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        Arrays.sort(a);
        int s = 0;
        for (int i = 0; i < m; i++) s += a[i];
        System.out.println(s);
    }
}

Example Input/Output 1:
Input:
5 2
9 2 1 5 4
Output:
3
