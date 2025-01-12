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

Example Input/Output 1:
Input:
1 2 3 4 5
Output:
120 60 40 30 24
Example Input/Output 2:
Input:
10 5 4
Output:
20 40 50
Example Input/Output 3:
Input:
21 100
Output:
100 21
