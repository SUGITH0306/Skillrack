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
