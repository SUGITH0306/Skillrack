import java.util.Scanner;

class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        int x = s.nextInt(), y = s.nextInt();
        System.out.println(reverse(reverse(x) + reverse(y)));
    }

    static int reverse(int n) {
        int r = 0;
        for (; n > 0; n /= 10) r = r * 10 + n % 10;
        return r;
    }
}
