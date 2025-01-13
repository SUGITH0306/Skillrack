import java.util.*;

public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        int n = Integer.parseInt(s.nextLine().trim());
        String r = "";
        double l = Double.MAX_VALUE;

        while (n-- > 0) {
            String line = s.nextLine().trim();
            String[] x = line.split("\\s+");
            if (x.length < 3) {
                continue; // Skip malformed lines
            }
            try {
                double p = Double.parseDouble(x[1]) * Double.parseDouble(x[2]) / 100;
                if (p < l) {
                    l = p;
                    r = x[0];
                }
            } catch (NumberFormatException e) {
                // Skip lines with invalid numbers
                continue;
            }
        }
        System.out.println(r.isEmpty() ? "Invalid input" : r);
    }
}
Example Input/Output 1:
Input:
3
harddisk 4000 20
monitor 15000 10
laptop 30000 5
Output:
harddisk
