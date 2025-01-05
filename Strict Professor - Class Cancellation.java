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
