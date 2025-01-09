import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String t = s.nextLine();
        if (!t.matches("\\d{1,2}:\\d{2}")) {
            System.out.println("INVALIDINPUT");
            return;
        }
        String[] p = t.split(":");
        int a = Integer.parseInt(p[0]), b = Integer.parseInt(p[1]);
        System.out.println(a >= 12 && b >= 0 && b < 60 && a <= 24 ? "PM" : a < 12 && b >= 0 && b < 60 ? "AM" : "INVALIDINPUT");
    }
}

Example 1:
Input:
13:44
Output:
PM
Example 2:
Input:
12:00
Output:
PM
Example 3:
Input:
32:70
Output:
INVALIDINPUT
Example 4:
Input:
05:32
Output:
AM
