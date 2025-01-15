import java.util.*;

public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String in = s.nextLine().trim(), v = "aeiouAEIOU";
        Set<Integer> p = new HashSet<>();
        for (int i = 0; i < in.length(); i++) if (v.indexOf(in.charAt(i)) != -1) p.add(i);
        StringBuilder r = new StringBuilder(in).reverse(), res = new StringBuilder();
        for (int i = 0; i < r.length(); i++) if (!p.contains(i)) res.append(r.charAt(i));
        System.out.println(res);
    }
}

Example 1:
Input:
environment
Output:
nenrine
Example 2:
Input:
pond
Output:
dop
