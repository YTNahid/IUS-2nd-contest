// https://www.codechef.com/problems/TWOSTR
#include <stdio.h>

int main(void) {
  #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif

    int t, i;
    scanf("%d",&t);
    
    for (i = 0; i < t; i++) {
        int count = 0, j;
        char x[10], y[10];
        scanf("%s%s", &x, &y);
        for (j = 0; x[j] != '\0'; j++) {
            if (x[j] == y[j] || x[j] == '?' || y[j] == '?') count = 1;
            else {
                count = 0;
                break;
            }
        }
        if (count) printf("YES\n");
        else printf("NO\n");  
    }

}
