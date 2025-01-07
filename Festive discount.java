import java.util.Scanner;

class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        double t = 0;
        for (int i = 0; i < n; i++) {
            double p = s.nextDouble(), d = p >= 1000 ? 0.5 : p > 500 ? 0.25 : p > 400 ? 0.2 : 0;
            t += p * (1 - d);
        }
        if (t > 2000) t -= 100;
        System.out.printf("%.2f\n", t);
    }
}
