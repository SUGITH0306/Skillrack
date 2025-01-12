import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input string and column count
        String s = sc.nextLine().trim();
        int c = sc.nextInt();
        sc.close();

        // Convert the string into a character array
        char[] chars = s.toCharArray();
        int rows = chars.length / c;

        // Create the matrix to store characters
        char[][] m = new char[rows][c];
        int index = 0;

        // Fill the matrix row by row
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < c; j++) {
                m[i][j] = chars[index++];
            }
        }

        // Reverse the characters in even rows (1-based index)
        for (int i = 1; i < rows; i += 2) {
            for (int j = 0, k = c - 1; j < k; j++, k--) {
                char temp = m[i][j];
                m[i][j] = m[i][k];
                m[i][k] = temp;
            }
        }

        // Collect the result by traversing column-wise
        StringBuilder result = new StringBuilder();
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < rows; i++) {
                result.append(m[i][j]);
            }
        }

        // Print the final result
        System.out.println(result.toString());
    }
}

Example 1:
Input:
midinadiazne
3
Output:
madeinindiaz
Example 2:
Input:
loaesfbnaiordilertenrdhdw
5
Output:
lionroaredandthebirdsflew
