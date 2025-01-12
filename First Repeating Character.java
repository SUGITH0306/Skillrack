import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int key = 0;

        for (int i = 0; i < s.length() - 1; i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s.charAt(i) == s.charAt(j)) {
                    System.out.println(s.charAt(j));
                    key = 1;
                    break;
                }
            }
            if (key == 1) {
                break;
            }
        }
    }
}


Example Input/Output 1:
Input:
abcdexyzbwqpoolj
Output:
b
