#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];
    int c = 0, i;
    
    fgets(S, sizeof(S), stdin);
    
    for(i = 0; S[i]; i++) {
        if ((i == 0 || S[i-1] == ' ') && S[i] != ' ') {
            c++;
        }
    }
    
    printf("%d\n", c);
    return 0;
}

Example Input/Output 1:
Input:
I like tea
Output:
3
Example Input/Output 2:
Input:
I like coffee very much
Output:
5
