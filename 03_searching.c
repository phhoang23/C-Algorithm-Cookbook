#include <stdio.h>

#define MAX 100

// Linear search: works on sorted or unsorted arrays.
// Returns the first matching index, or -1 if not found.
int linearSearch(const int a[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == target) return i;
    }
    return -1;
}

// Binary search: array MUST be sorted in ascending order.
// Returns an index of target, or -1 if not found.
int binarySearch(const int a[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids left+right overflow.
        if (a[mid] == target) return mid;
        if (a[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main(void) {
    int a[MAX], n, target, i, index;

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &target);

    index = linearSearch(a, n, target);
    printf("Linear search index = %d\n", index);

    // Only correct if input array is sorted ascending.
    index = binarySearch(a, n, target);
    printf("Binary search index (if sorted) = %d\n", index);

    return 0;
}
