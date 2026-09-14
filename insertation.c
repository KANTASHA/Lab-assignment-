#include <stdio.h>

int main() {
    char str1[50], str2[50], res[100];
    int pos, i, j, k;

    printf("Enter the original string: ");
    scanf("%s", str1);

    printf("Enter the new string: ");
    scanf("%s", str2);

    printf("Enter specific position (1-based index): ");
    scanf("%d", &pos);


    for (i = 0; i < pos - 1 && str1[i] != '\0'; i++) {
        res[i] = str1[i];
    }


    j = i;
    for (k = 0; str2[k] != '\0'; k++, j++) {
        res[j] = str2[k];
    }
    for (k = pos - 1; str1[k] != '\0'; k++, j++) {
        res[j] = str1[k];
    }
    res[j] = '\0';

    printf("Resulting string: %s\n", res);

    return 0;
}
