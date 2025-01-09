import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        String str = in.nextLine();
        int c = 1;
        char[] st = str.toCharArray();
        for (int i = 0; i < st.length; i++) {
            if (st[i] == 'T' || st[i] == 'D' || st[i] == 'F' || st[i] == 'L') {
                c = c * 2;
            }
        }
        System.out.print(c);
    }
}

Example 1:
Input:
FILIPEK
Output:
4

Example 2:
Input:
KICKED
Output:
2

Example 3:
Input:
FUTILE
Output:
8
