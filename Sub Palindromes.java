import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String x = s.nextLine();
        int n = x.length(), c = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                String p = x.substring(i, j + 1);
                String r = new StringBuilder(p).reverse().toString();
                if (p.equals(r)) c++;
            }
        }
        System.out.println(c);
    }
}
