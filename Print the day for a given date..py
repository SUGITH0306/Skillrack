days = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]
start_day = input().strip()
d = int(input())
start_index = days.index(start_day)
result_day = days[(start_index + (d - 1)) % 7]
print(result_day)

Example 1:
Input
MON
10
Output:
WED
Example 2:
Input:
FRI
24
Output:
SUN
