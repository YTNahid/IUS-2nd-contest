// https://toph.co/p/is-prime
#include <stdio.h>


int main() {

    int N, x = 0;

    scanf("%d", &N);

    if (N == 1) {
        printf("No");
        x = 1;
    } else {
        for(int i = 2; i < N; i++) {
            if (N % i == 0) {
                printf("No");
                x = 1;
                break;
            }
        }
    }
    if (x == 0) {
    	printf("Yes");
    }
}