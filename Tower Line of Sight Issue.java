import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int Ax = s.nextInt(), Ay = s.nextInt();
        int Bx = s.nextInt(), By = s.nextInt();
        int Cx = s.nextInt(), Cy = s.nextInt();
        int Dx = s.nextInt(), Dy = s.nextInt();
        boolean f = ((Bx <= Ax && By <= Cy) || (Bx >= Cx && Bx >= Ax)) && ((By <= Ay && By <= Cy) || (By >= Ay && By >= Cy))
                && ((Dx <= Ax && Dx <= Cx) || (Dx >= Cx && Dx >= Ax)) && ((Dy <= Ay && Dy <= Cy) || (Dy >= Ay && Dy >= Cy));
        boolean f1 = ((Ax <= Bx && Ax <= Dx) || (Ax >= Bx && Ax >= Dx)) && ((Ay <= By && Ay <= Dy) || (Ay >= By && Ay >= Dy))
                && ((Cx <= Bx && Cx <= Dx) || (Cx >= Bx && Cx >= Dx)) && ((Cy <= By && Cy <= Dy) || (Cy >= By && Cy >= Dy));
        System.out.println(f && f1 ? "no" : "yes");
    }
}

Example Input/Output 1:
0 0
0 -2
2 0
0 2
Output:
yes
Example Input/Output 2:
Input:
0 0
0 -2
2 0
0 -5
Output:
no
