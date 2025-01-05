import java.util.*;

public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String[] x = s.nextLine().trim().split("\\s+");
        Map<Integer, Integer> m = new HashMap<>();

        for (String y : x) {
            int n = Integer.parseInt(y);
            m.put(n, m.getOrDefault(n, 0) + 1);
        }

        int c = 0;
        int r = Integer.MAX_VALUE;

        for (Map.Entry<Integer, Integer> e : m.entrySet()) {
            int k = e.getKey();
            int v = e.getValue();

            if (v > c || (v == c && k < r)) {
                c = v;
                r = k;
            }
        }

        System.out.println(r);
    }
}
