import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String[] p = s.nextLine().split(" ");
        int x = Integer.parseInt(p[0].substring(1)), y = Integer.parseInt(p[1].substring(1));
        for (int i = 2; i < p.length; i++) {
            int d = Integer.parseInt(p[i].substring(1));
            if (p[i].charAt(0) == 'N') y += d;
            else if (p[i].charAt(0) == 'E') x += d;
            else if (p[i].charAt(0) == 'S') y -= d;
            else x -= d;
        }
        System.out.println("x" + x + " y" + y);
    }
}

Example Input/Output:
If the input string is x2 yl N3 E2 Sl the output must be
x4 y3
If the input string is x-2 y3 Nl W3 the output must be
x-5 y4
