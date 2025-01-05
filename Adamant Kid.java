import java.util.Scanner;

public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);

        // Read the string and positions
        String t = s.nextLine().trim();
        int x = s.nextInt();
        int y = s.nextInt();

        // Find the length of the string
        int n = t.length();

        // Compare characters at positions X and Y
        if (t.charAt((x - 1) % n) == t.charAt((y - 1) % n)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
