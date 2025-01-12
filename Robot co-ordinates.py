s = input().split()
x, y = int(s[0][1:]), int(s[1][1:])
for i in range(2, len(s)):
    d = int(s[i][1:])
    if s[i][0] == 'N':
        y += d
    elif s[i][0] == 'E':
        x += d
    elif s[i][0] == 'S':
        y -= d
    else:
        x -= d
print(f"x{x} y{y}")

Example Input/Output:
If the input string is x2 yl N3 E2 Sl the output must be
x4 y3
If the input string is x-2 y3 Nl W3 the output must be
x-5 y4
