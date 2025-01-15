#include <iostream>
using namespace std;

int main() {
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    
    // Input coordinates
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;
    
    // First condition to check if the rectangles are non-overlapping
    bool f = ((Bx <= Ax && By <= Cy) || (Bx >= Cx && Bx >= Ax)) && ((By <= Ay && By <= Cy) || (By >= Ay && By >= Cy)) 
            && ((Dx <= Ax && Dx <= Cx) || (Dx >= Cx && Dx >= Ax)) && ((Dy <= Ay && Dy <= Cy) || (Dy >= Ay && Dy >= Cy));
    
    // Second condition to check if the rectangles are non-overlapping
    bool f1 = ((Ax <= Bx && Ax <= Dx) || (Ax >= Bx && Ax >= Dx)) && ((Ay <= By && Ay <= Dy) || (Ay >= By && Ay >= Dy)) 
            && ((Cx <= Bx && Cx <= Dx) || (Cx >= Bx && Cx >= Dx)) && ((Cy <= By && Cy <= Dy) || (Cy >= By && Cy >= Dy));

    // Output "no" if the rectangles overlap, otherwise "yes"
    if (f && f1) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
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
