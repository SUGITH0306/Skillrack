import java.util.Scanner;
import java.util.HashSet;

class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String x = s.nextLine(), y = s.nextLine();
        HashSet<Character> setX = new HashSet<>(), setY = new HashSet<>();
        
        for (char c : x.toCharArray()) setX.add(c);
        for (char c : y.toCharArray()) setY.add(c);
        
        System.out.println(setX.equals(setY) ? "YES" : "NO");
    }
}
