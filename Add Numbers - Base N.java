import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        String x = s.next(), y = s.next();
        int sum = Integer.parseInt(x, n) + Integer.parseInt(y, n);
        System.out.println(sum);
    }
}
