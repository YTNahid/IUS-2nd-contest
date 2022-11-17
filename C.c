// https://toph.co/p/fibonacci-numbers
#include <stdio.h>


int main() {

    int f[50], i, count = 0;
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i < 50; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    int N;
    scanf("%d", &N);
    count = N;
    printf("%d", f[count]);


        
}