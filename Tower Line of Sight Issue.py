Ax,Ay=map(int,input().split())
Bx,By=map(int,input().split())
Cx,Cy=map(int,input().split())
Dx,Dy=map(int,input().split())
f=f1=0
if(((Bx<=Ax and By<=Cx)or(Bx>=Cx and Bx>=Ax))and((By<=Ay and By<=Cy)or(By>=Ay and By>=Cy))and((Dx<=Ax and Dx<=Cx)or(Dx>=Cx and Dx>=Ax))and((Dy<=Ay and Dy<=Cy)or(Dy>=Ay and Dy>=Cy))):f=1
if(((Ax<=Bx and Ax<=Dx)or(Ax>=Bx and Ax>=Dx))and((Ay<=By and Ay<=Dy)or(Ay>=By and Ay>=Dy))and((Cx<=Bx and Cx<=Dx)or(Cx>=Bx and Cx>=Dx))and((Cy<=By and By<=Dy)or(Cy>=By and Cy>=Dy))):f1=1
print("no" if f and f1 else "yes")
