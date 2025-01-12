x,y=int(input()),int(input())
t,t1,s,s1,s2=x,y,0,0,0
while x:s=(s*10)+(x%10);x//=10
while y:s1=(s1*10)+(y%10);y//=10
a=s+s1
while a:s2=(s2*10)+(a%10);a//=10
print(s2)

Example 1:
Input:
24
1
Output:
34
Example 2:
Input:
305
794
Output:
1
