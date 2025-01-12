import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String[] p = s.nextLine().trim().split("=");
        String l = p[0], r = p[1], a = "", c = "";
        int t = Integer.parseInt(r);
        char o = ' ';

        for (int i = 0; i < l.length(); i++) {
            char x = l.charAt(i);
            if ("+-*/".indexOf(x) >= 0) {
                a = l.substring(0, i);
                c = l.substring(i + 1);
                o = x;
                break;
            }
        }

        for (char x : "+-*/".toCharArray()) {
            int n1 = Integer.parseInt(a), n2 = Integer.parseInt(c), res = 0;
            if (x == '+') res = n1 + n2;
            else if (x == '-') res = n1 - n2;
            else if (x == '*') res = n1 * n2;
            else if (x == '/' && n2 != 0) res = n1 / n2;

            if (res == t) {
                System.out.println(x);
                break;
            }
        }
        s.close();
    }
}

Example 1:
Input:
5-4=20
Output:
*
Example 2:
Input:
999+9=111
Output:
/
