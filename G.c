// https://codeforces.com/problemset/problem/798/A
#include <stdio.h>
#include <string.h>

int main() {
    int i, length, x = 0;
    char s[15];

    gets(s);
    
    length = strlen(s);

    if (length > 2) {
        for(i = 0; i < length; i++) {
            if(s[i] != s[length-i-1]) {
                s[i] = s[length-i-1];
                break;
            }
        }
    }
    
    for (i = 0; i < length; i++) {
        if (s[i] != s[length-i-1]){
            printf("NO");
            x = 1;
            break;
        }
    }

    if (x == 0) {
        printf("YES");
    }
}