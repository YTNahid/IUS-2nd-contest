// https://toph.co/p/better-passwords
#include <stdio.h>
#include <string.h>


int main() {
    int len, i;
    char pass[25];
    char s = '.';

    gets(pass);

    len = strlen(pass);

    pass[0] = pass[0] - 32;
    strncat(pass, &s, 1);
    len++;

    for (i = 1; i < len; i++) {
        if (pass[i] == 's') {
            pass[i] = '$';
        } else if (pass[i] == 'i') {
            pass[i] = '!';
        } else if (pass[i] == 'o') {
            len++;
            for (int j = len; j > i + 1; j--) {
                pass[j] = pass[j - 1];
            }
            pass[i] = '(';
            pass[i + 1] = ')';
        }
    }

    printf("%s", pass);
}