import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt(), y1 = sc.nextInt();
        int x2 = sc.nextInt(), y2 = sc.nextInt();
        
        double d = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));
        
        System.out.printf("%.2f\n", d);
    }
}

Example 1:
Input:
0 4
3 0
Output:
5.00
Example 2:
Input:
2 2
14 7
Output:
13.00
Example 3:
Input:
0 0
3 3
Output:
4.24
