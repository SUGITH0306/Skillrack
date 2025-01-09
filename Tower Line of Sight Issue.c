#include <stdio.h>

int main() {
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    int f = 0, f1 = 0;

    // Input points
    scanf("%d %d", &Ax, &Ay);
    scanf("%d %d", &Bx, &By);
    scanf("%d %d", &Cx, &Cy);
    scanf("%d %d", &Dx, &Dy);

    // Check conditions for f
    if (((Bx <= Ax && By <= Cy) || (Bx >= Cx && Bx >= Ax)) &&
        ((By <= Ay && By <= Cy) || (By >= Ay && By >= Cy)) &&
        ((Dx <= Ax && Dx <= Cx) || (Dx >= Cx && Dx >= Ax)) &&
        ((Dy <= Ay && Dy <= Cy) || (Dy >= Ay && Dy >= Cy))) {
        f = 1;
    }

    // Check conditions for f1
    if (((Ax <= Bx && Ax <= Dx) || (Ax >= Bx && Ax >= Dx)) &&
        ((Ay <= By && Ay <= Dy) || (Ay >= By && Ay >= Dy)) &&
        ((Cx <= Bx && Cx <= Dx) || (Cx >= Bx && Cx >= Dx)) &&
        ((Cy <= By && By <= Dy) || (Cy >= By && Cy >= Dy))) {
        f1 = 1;
    }

    // Output result
    if (f && f1) {
        printf("no\n");
    } else {
        printf("yes\n");
    }

    return 0;
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
