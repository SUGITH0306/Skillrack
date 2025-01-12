import java.util.Scanner;

class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String x = s.nextLine(), y = s.nextLine();
        int c = 0;
        for (char z : x.toCharArray()) if (y.contains(String.valueOf(z))) { c++; y = y.replaceFirst(String.valueOf(z), ""); }
        System.out.println(c);
    }
}

Example 1:
Input:
china
india
Output:
3
Example 2:
Input:
energy
every
Output:
4    
