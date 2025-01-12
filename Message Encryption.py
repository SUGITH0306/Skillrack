s = input().strip()
c = int(input())
s = list(s)
m = [['0' for j in range(c)] for i in range(len(s) // c)]
r = []
i, j = 0, 0
for k in range(len(s)):
    m[i][j] = s[k]
    if j == c - 1:
        i += 1
        j = 0
    else:
        j += 1
for i in range(len(m)):
    m[i] = list(m[i])
    if (i + 1) % 2 == 0:
        m[i].reverse()
    r.append(m[i])
i, j = 0, 0
for k in range(len(s)):
    print(r[i][j], end="")
    if i == len(s) // c - 1:
        i = 0
        j += 1
        continue
    i += 1

Example 1:
Input:
midinadiazne
3
Output:
madeinindiaz
Example 2:
Input:
loaesfbnaiordilertenrdhdw
5
Output:
lionroaredandthebirdsflew
