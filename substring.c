#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "UNIVERSITY OF SCIENCE AND TECHNOLOGY";
    char sub[] = "SCIENCE";

    char *ptr = strstr(text, sub);
    if (ptr != NULL) {
        printf("Substring found starting at index: %ld\n", ptr - text);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
