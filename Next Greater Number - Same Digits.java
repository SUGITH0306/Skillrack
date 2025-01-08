import java.util.*;
public class Main {
    public static void main(String[] a) {
        char[] n = new Scanner(System.in).next().toCharArray();
        int i = n.length - 1;
        while (i > 0 && n[i - 1] >= n[i]) i--;
        if (i == 0) { System.out.println(new String(n)); return; }
        int j = n.length - 1;
        while (n[j] <= n[i - 1]) j--;
        char t = n[i - 1]; n[i - 1] = n[j]; n[j] = t;
        for (int k = i; k < (n.length + i) / 2; k++) { t = n[k]; n[k] = n[n.length - k + i - 1]; n[n.length - k + i - 1] = t; }
        System.out.println(new String(n));
    }
}
