import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), c = 0;
        String s = sc.next();
        int t = convertToMinutes(s);
        for (int i = 0; i < n; i++) if (convertToMinutes(sc.next()) <= t) c++;
        System.out.println(c >= m ? "No" : "Yes");
    }

    private static int convertToMinutes(String s) {
        String[] p = s.split(":");
        return Integer.parseInt(p[0]) * 60 + Integer.parseInt(p[1]);
    }
}

Example Input/Output 1:
Input
53
9:30
9:30 9:38 9:31 9:32 9:31
Output:
Yes
Example Input/Output 2:
Input:
6 4
11:10
10:30 10:40 10:55 11:20 11:10 11:12
Output:
No 
