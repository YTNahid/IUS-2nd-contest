#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);
    int arr[n], i, x = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == 1) {
            printf("HARD");
            x = arr[i];
            break;
        }
    } 
    if (x == 0) {
        printf("EASY");
    }
}