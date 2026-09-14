#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int pos, i, len;
    printf("Enter the string: ");
    scanf("%s", str);
    len = strlen(str);
    printf("Enter position to delete (0 to %d): ", len - 1);
    scanf("%d", &pos);

    if (pos >= 0 && pos < len) {

        for (i = pos; i < len - 1; i++) {
            str[i] = str[i + 1];
        }

        str[len - 1] = '\0';

        printf("String after deletion:\n%s\n", str);
    } else {
        printf("Invalid position!\n");
    }

    return 0;
}
