import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Input the string as a character array
        char[] a = sc.nextLine().toCharArray();
        
        // Input the two characters
        char b = sc.nextLine().charAt(0);
        char c = sc.nextLine().charAt(0);
        
        int t = 0;
        
        // Loop through the character array to check pairs
        for (int i = 0; i < a.length - 1; i++) {
            if (a[i] == b && a[i + 1] == c) {
                t++;
            }
        }
        
        // Print the result
        System.out.println(t);
    }
}

Example 1:
Input
malayalam
a
l
Output:
2
Example 2:
Input:
engine
e
n
Output:
1
