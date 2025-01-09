#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char s[201], w1[21], w2[21], *t;
    int d = INT_MAX, last = -1, i = 0;

    // Read the input string
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; // Remove trailing newline if present

    // Read the two words
    scanf("%s %s", w1, w2);

    // Split the string into words and process
    t = strtok(s, " ");
    while (t != NULL) {
        if (strcmp(t, w1) == 0 || strcmp(t, w2) == 0) {
            if (last != -1 && strcmp(t, w1) != strcmp(&s[last], w2)) {
                int dist = i - last;
                if (dist < d) d = dist;
            }
            last = i; // Update the last occurrence index
        }
        i++;
        t = strtok(NULL, " ");
    }

    // Output the minimum distance or -1 if not found
    printf("%d\n", (d == INT_MAX ? -1 : d));
    return 0;
}
