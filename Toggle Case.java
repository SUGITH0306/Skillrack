import java.util.Scanner;

class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        StringBuilder b = new StringBuilder(s.nextLine());
        for (int i = 0; i < b.length(); i++) 
            if (Character.isLowerCase(b.charAt(i))) b.setCharAt(i, Character.toUpperCase(b.charAt(i)));
            else if (Character.isUpperCase(b.charAt(i))) b.setCharAt(i, Character.toLowerCase(b.charAt(i)));
        System.out.println(b);
    }
}

Example 1:
Input:
GooD mORniNg12_3
Output:
good MorNlnG12_3
Example 2:
Input:
R@1nBow
Output:
r@1NbOW
