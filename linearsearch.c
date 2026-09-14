#include <stdio.h>

int main() {
    int arr[100], n, i, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter search key: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Key found at position %d\n", i + 1);
            return 0;
        }
    }

    printf("Elements not found.\n");
    return 0;
}
