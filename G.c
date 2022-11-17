// https://codeforces.com/problemset/problem/798/A
#include <stdio.h>
#include <string.h>

int main() {

    int i, length, count = 0;
    char s[20];

    gets(s);
    
    length = strlen(s);

    for(i = 0; i < length/2; i++) {
        if(s[i] != s[length-i-1]) {
            count++;
        }
    }
    if (count == 1 || length == 1) printf("YES");
    else if (count == 0 && length%2 == 1) printf("YES");
    else printf("NO");
    
}
