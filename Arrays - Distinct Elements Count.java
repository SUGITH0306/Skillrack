import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l1 = sc.nextInt(), l2 = sc.nextInt();
        Set<Integer> s1 = new HashSet<>(), s2 = new HashSet<>();
        
        for (int i = 0; i < l1; i++) s1.add(sc.nextInt());
        for (int i = 0; i < l2; i++) s2.add(sc.nextInt());
        
        Set<Integer> d1 = new HashSet<>(s1), d2 = new HashSet<>(s2);
        d1.removeAll(s2);
        d2.removeAll(s1);
        
        System.out.println(d1.size() + d2.size());
    }
}
