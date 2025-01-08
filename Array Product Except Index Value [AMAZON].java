import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String[] x = s.nextLine().split(" ");
        int n = x.length, p = 1, i = 0;
        for (String v : x) p *= Integer.parseInt(v);
        for (; i < n; ) 
            System.out.print(p / Integer.parseInt(x[i++]) + (i < n ? " " : ""));
    }
}
