#include <stdio.h>
#include <string.h>


int swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
    return 1;
}


int permute(char *str, int SURU, int SASH) {
    if (SURU == SASH) {
        printf("%s\n", str);
        return 1;
    }

    for (int i = SURU; i <= SASH; i++) {
        swap(&str[SURU], &str[i]);
        permute(str, SURU + 1, SASH);
        swap(&str[SURU], &str[i]);
    }

    return 0;
}

int main(int argc, char *argv[]) {
    char str[] = "USTC";
    int n = strlen(str);

    printf("Permutations of the set %s:\n", str);
    permute(str, 0, n - 1);

    return 0;
}
