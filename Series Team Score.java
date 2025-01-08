import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String[] x = s.nextLine().split(" "), y = s.nextLine().split(" ");
        int A = 0, B = 0;
        for (int i = 0; i < x.length; i++) {
            int aG = Integer.parseInt(x[i]), bG = Integer.parseInt(y[i]);
            if (aG > bG) A += 3; 
            else if (bG > aG) B += 3; 
            else { A += 1; B += 1; } // Draw: Add 1 point to both teams
        }
        System.out.println(A + " " + B);
    }
}
