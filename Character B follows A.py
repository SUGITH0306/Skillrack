a=list(input().strip())
b=input().strip()
c=input().strip()
t=0
for i in range(len(a)-1):
    if a[i]==b and a[i+1]==c:
        t+=1
print(t)

Example 1:
Input
malayalam
a
l
Output:
2
Example 2:
Input:
engine
n
Output:
1
