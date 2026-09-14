#include <stdio.h>

int main() {
    char c1[50] = "kanta";
    char c2[50] = "saha";
    char c3[100];
    int i, j;
for (i = 0; c1[i] != '\0'; i++) {
        c3[i] = c1[i];
    }
c3[i] = ' ';
    i++;
for (j = 0; c2[j] != '\0'; j++, i++) {
        c3[i] = c2[j];
    }
    c3[i] = '\0';
    for (j = 0; j < i; j++) {
        printf("%c", c3[j]);
    }
    printf("\n");

    return 0;
}
