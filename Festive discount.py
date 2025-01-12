n = int(input())
t = sum((p := float(input())) * (1 - (0.5 if p >= 1000 else 0.25 if p > 500 else 0.2 if p > 400 else 0)) for _ in range(n))
t -= 100 if t > 2000 else 0
print(f"{t:.2f}")

Input
3
1000
1200
400
Output:
1500.00
Example 2:
Input:
5
450
500
2000
1600
300
Output:
2760.00
