import java.util.*;
public class Main {
    public static void main(String[] a) {
        int n = new Scanner(System.in).nextInt(), sum = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (i != n / i) sum += n / i;
            }
        }
        System.out.println(sum);
    }
}

Sample Input/Output:
Example 1:
Input
2
Output:
1
Example 2:
Input:
20
Output:
22    
