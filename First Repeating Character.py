s = input().strip()
key = 0

for i in range(len(s) - 1):
    for j in range(i + 1, len(s)):
        if s[i] == s[j]:
            print(s[j])
            key = 1
            break
    if key == 1:
        break

Example Input/Output 1:
Input:
abcdexyzbwqpoolj
Output:
b
