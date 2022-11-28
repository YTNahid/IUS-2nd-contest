// https://codeforces.com/problemset/problem/1760/B
#include <stdio.h>
#include <string.h>
 
int main() {

    int n;
    scanf("%d", &n);

    while(n--) {

        int a, len, i, max = 0;
        scanf("%d", &a);
        len = a+1;
        char s[len];
        scanf("%s", &s);

        for(i = 0; i < a; i++) {
            if(s[i] > max) {
                max = s[i];
            }
        }
        printf("%d\n", max - 96);

    }
}
