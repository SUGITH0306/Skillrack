import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        List<Integer> p = new ArrayList<>(), o = new ArrayList<>(), e = new ArrayList<>();
        for (int n : Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray())
            if (isP(n)) p.add(n); else if (n % 2 == 0) e.add(n); else o.add(n);
        p.sort(null); o.sort(null); e.sort(null);
        p.forEach(x -> System.out.print(x + " "));
        o.forEach(x -> System.out.print(x + " "));
        e.forEach(x -> System.out.print(x + " "));
    }
    static boolean isP(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
        return true;
    }
}
Example Input/Output 1:
Input:
4 5 9 22 11 2 15
Output:
2 5 11 9 15 4 22
Example Input/Output 2:
Input:
611953 494147 493137 493133 493138
Output:
493133 494147 611953 493137 493138
