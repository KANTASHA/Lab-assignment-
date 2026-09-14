#include <stdio.h>

int main() {
    int a[100], n, i, pos, value;
printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter position: ");
    scanf("%d", &pos);
printf("Enter value: ");
    scanf("%d", &value);
    for (i = n - 1; i >= pos; i--) {
        a[i + 1] = a[i];
    }
    a[pos] = value;
    n++;
printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
