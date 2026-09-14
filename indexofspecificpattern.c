#include <stdio.h>
#include <string.h>

int find_pattern_index(char *text, char *pattern) {

    char *ptr = strstr(text, pattern);

    if (ptr != NULL) {
        return ptr - text;
    }

    return -1;
}

int main() {
    char text[] = "COMPUTER SCIENCE AND ENGINEERING";
    char pattern[] = "CSE";

    int index = find_pattern_index(text, pattern);

    if (index != -1) {
        printf("Pattern found at index: %d\n", index);
    } else {
        printf("Pattern not found.\n");
    }

    return 0;
}
