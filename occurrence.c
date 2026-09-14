#include <stdio.h>
int findFirstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
} else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}
int findLastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}
int main() {
    int arr[] = {1, 3, 5, 5, 5, 5, 7, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int first = findFirstOccurrence(arr, n, target);
    int last = findLastOccurrence(arr, n, target);
    printf("Array: {1, 3, 5, 5, 5, 5, 7, 9, 12}\n");
    printf("Target Element: %d\n\n", target);
    if (first != -1) {
        int count = (last - first) + 1;
        printf("First Occurrence Index: %d\n", first);
        printf("Last Occurrence Index: %d\n", last);
        printf("Total Count: %d\n", count);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}
