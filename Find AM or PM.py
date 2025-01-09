a,b=map(int,input().split(":"))
if a>=12 and b<=60 and a<=24:
    print("PM")
elif a<12 and b<=60:
    print("AM")
else:
    print("INVALIDINPUT")

Example 1:
Input:
13:44
Output:
Example 2:
Input:
12:00
Output:
Example 3:
Input:
32:70
Output:
INVALIDINPUT
Example 4:
Input:
05:32
Output:
AM
