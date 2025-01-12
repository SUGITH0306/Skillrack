import java.util.*;

public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);

        // Read the number of country-capital pairs
        int n = s.nextInt();
        s.nextLine(); // Consume the newline character

        // Create a map to store country-capital pairs
        Map<String, String> m = new HashMap<>();

        // Read each country-capital pair and store it in the map
        for (int i = 0; i < n; i++) {
            String line = s.nextLine().trim();
            String[] x = line.split(" ", 2); // Split into exactly two parts
            if (x.length == 2) {
                m.put(x[0].trim(), x[1].trim()); // Store country and capital in map
            }
        }

        // Read the country to query
        String q = s.nextLine().trim();

        // Print the capital if found, else print NONE
        if (m.containsKey(q)) {
            System.out.println(m.get(q));
        } else {
            System.out.println("NONE");
        }
    }
}
input:
5
Afghanistan Kabul
Austria Vienna
Armenia YerevanY
Chile Santiago
Croatia Zagreb
Austria
output:
Vienna
Example 2:
Input:
4
Armenia Yerevan
Chile Santiago
Croatia Zagreb
Iran Tehran
Japan
Output:
NONE
