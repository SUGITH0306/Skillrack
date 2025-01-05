import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String m = s.nextLine(); 
        int x = s.nextInt(), y = s.nextInt(); 
        StringBuilder e = new StringBuilder();  
        for (char c : m.toCharArray()) {
            if (Character.isLowerCase(c)) 
                e.append((char) (((c - 'a' + x) % 26) + 'a'));
            else if (Character.isDigit(c)) 
                e.append((char) (c + y));
            else 
                e.append(c);
        }
        System.out.println(e.toString());
    }
}
