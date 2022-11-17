// https://toph.co/p/test-cases
#include <stdio.h>


int main()
{

    int n, cpuL, memL, i, dx = 0, cx = 0, mx = 0;

    scanf("%d%d%d", &n, &cpuL, &memL);

    int di[n], cpu[n], mem[n];

    for (i = 0; i < n; i++) {
        scanf("%d%d%d", &di[i], &cpu[i], &mem[i]);
    }
    
    for (i = 0; i < n; i++) {
        if (cpu[i] > cpuL) {
            printf("CLE");
            cx = 1;
            break;
        } else if (mem[i] > memL) {
            printf("MLE");
            mx = 1;
            break;
        } else if (di[i] > 0) {
            printf("WA");
            dx = 1;
            break;
        }
    }

    if (dx == 0 && cx == 0 & mx == 0) {
    	printf("AC");
    }

}