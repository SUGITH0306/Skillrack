a=input().strip()
a,b=map(str,a.split("="))
c=""
for i in range(len(a)):
    if a[i] in "+-/*":
        a,c=a[:i],a[i+1:]
        break
for i in "+-/*":
    if(eval(a+i+c)==int(b)):
        print(i)
        break

Example 1:
Input:
5-4=20
Output:
*
Example 2:
Input:
999+9=111
Output:
/
