#include <stdio.h>

#define MAX 100

int main(void) {
    int a[MAX], b[MAX];
    int n, i, sum = 0, min, max, evenCount = 0;

    scanf("%d", &n); // Assume 1 <= n <= MAX.
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    min = max = a[0]; // Start from first element; n must be >= 1.

    for (i = 0; i < n; i++) {
        sum += a[i];                    // Sum all elements.
        if (a[i] < min) min = a[i];     // Update minimum.
        if (a[i] > max) max = a[i];     // Update maximum.
        if (a[i] % 2 == 0) evenCount++; // Count even numbers.
        b[i] = a[i];                    // Copy array a to b.
    }

    // Reverse array a in-place by swapping symmetric elements.
    for (i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Sum = %d\n", sum);
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
    printf("Even count = %d\n", evenCount);

    printf("Copied array: ");
    for (i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\nReversed array: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}
