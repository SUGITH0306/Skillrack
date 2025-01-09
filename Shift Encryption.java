import java.util.Scanner;

class Main {
    public static void main(String[] a) {
        Scanner sc = new Scanner(System.in);
        String m = sc.nextLine();
        int x = sc.nextInt(), y = sc.nextInt();
        StringBuilder e = new StringBuilder();
        
        for (char c : m.toCharArray()) {
            if (Character.isLowerCase(c)) {
                if (c + x > 'z') {
                    e.append((char) (c + x - 26));
                } else {
                    e.append((char) (c + x));
                }
            } else if (Character.isDigit(c)) {
                int d = c - '0' + y;
                e.append(d);
            } else {
                e.append(c);
            }
        }
        
        System.out.println(e);
    }
}

Example 1:
Input:
call me at 10 p.m
2
1
Output:
ecnn og cv 21 r.o

Example 2:
Input:
credit 1 lakh
3
Output:
fuhglw 1 odnk

Example 3:
Input:
interview rita at 4pm
1
6
Output:
joufswjfx sjub bu 10qn
