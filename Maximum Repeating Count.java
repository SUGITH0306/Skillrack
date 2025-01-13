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
Example 1:
Input:
10 20 30 20 30 10 30 20
Output:
20
Example 2:
Input:
1 2 3 5 9 2 9 6 9
Output:
9
