#include <stdio.h>
#include <string.h>

int main() {
    char ch[1001];
    int i, j;
    int key = 0;
    
    fgets(ch, sizeof(ch), stdin);
    
    int len = strlen(ch);
    for(i = 0; i < len-1; i++) {
        for(j = i+1; j < len; j++) {
            if(ch[i] == ch[j]) {
                printf("%c\n", ch[j]);
                key = 1;
                break;
            }
        }
        if(key == 1) {
            break;
        }
    }
    
    return 0;
}

Example Input/Output 1:
Input:
abcdexyzbwqpoolj
Output:
b
