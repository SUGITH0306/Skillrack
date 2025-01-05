import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        if (p.length() < 8 || p.length() > 25) {
            System.out.println("INVALID");
            return;
        }
        boolean a = false, b = false, c = false, d = false;
        for (int i = 0; i < p.length(); i++) {
            char x = p.charAt(i);
            if ("#!_$@".indexOf(x) != -1) a = true;
            if (Character.isDigit(x)) b = true;
            if (Character.isUpperCase(x)) c = true;
            if (Character.isLowerCase(x)) d = true;
        }
        if (a && b && c && d) System.out.println("VALID");
        else System.out.println("INVALID");
    }
}
