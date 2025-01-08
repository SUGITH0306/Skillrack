import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String t = s.nextLine().toLowerCase();
        int c = 0;
        for (String w : t.split("\\W+")) if (w.equals("a") || w.equals("an") || w.equals("the")) c++;
        System.out.println(c);
    }
}
