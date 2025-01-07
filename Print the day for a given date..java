import java.util.Scanner;

class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String[] d = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
        String x = s.nextLine();
        int n = s.nextInt(), i = 0;
        for (; !d[i].equals(x); i++);
        System.out.println(d[(i + (n - 1) % 7) % 7]);
    }
}
