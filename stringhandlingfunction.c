#include <stdio.h>
#include <string.h>

char GETCHAR(const char *str, int n) { return str[n]; }
void PUTCHAR(char *str, int n, char c) { str[n] = c; }
int LENGTH(const char *str) { return strlen(str); }

int POS(const char *str1, const char *str2) {
    char *ptr = strstr(str1, str2);
    return (ptr != NULL) ? (int)(ptr - str1) : -1;
}

void CONCAT(char *dest, const char *str1, const char *str2) {
    strcpy(dest, str1);
    strcat(dest, str2);
}

void SUBSTRING(char *dest, const char *str1, int i, int m) {
    strncpy(dest, str1 + i, m);
    dest[m] = '\0';
}

void DELETE(char *str, int i, int m) {
    int len = strlen(str);
    if (i < len) {
        memmove(str + i, str + i + m, len - i - m + 1);
    }
}

void INSERT(char *str1, const char *str2, int i) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    memmove(str1 + i + len2, str1 + i, len1 - i + 1);
    memcpy(str1 + i, str2, len2);
}

int COMPARE(const char *str1, const char *str2) { return strcmp(str1, str2); }

int main() {
    char str[100] = "Hello World";
    char buffer[100];

    printf("GETCHAR at 1: %c\n", GETCHAR(str, 1));
    PUTCHAR(str, 0, 'h');
    printf("After PUTCHAR: %s\n", str);
    printf("LENGTH: %d\n", LENGTH(str));
    printf("POS of 'World': %d\n", POS(str, "World"));

    CONCAT(buffer, str, "!!!");
    printf("CONCAT: %s\n", buffer);

    SUBSTRING(buffer, str, 6, 5);
    printf("SUBSTRING (6, 5): %s\n", buffer);

    DELETE(str, 5, 6);
    printf("DELETE (5, 6): %s\n", str);

    INSERT(str, " World", 5);
    printf("INSERT: %s\n", str);

    printf("COMPARE: %d\n", COMPARE(str, "hello World"));
    return 0;
}
