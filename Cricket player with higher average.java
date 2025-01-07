import java.util.Scanner;

class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String[] p = s.nextLine().split("\\s+"), q = s.nextLine().split("\\s+");
        int x = 0, y = 0;
        for (String z : p) if ((x += c(z)) < 0) return;
        for (String z : q) if ((y += c(z)) < 0) return;
        double u = (double) x / p.length, v = (double) y / q.length;
        System.out.println(u > v || (u == v && x > y) ? x : y);
    }

    static int c(String z) {
        int n = Integer.parseInt(z);
        if (n < 0) { System.out.println("INVALIDINPUT"); return -1; }
        return n;
    }
}
