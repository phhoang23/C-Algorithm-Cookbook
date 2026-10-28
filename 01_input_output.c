#include <stdio.h>

int main(void) {
    int a[100];
    int n, i;

    // Read n; ensure 1 <= n <= 100 for this example.
    scanf("%d", &n);

    // Read n array elements.
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Print all elements separated by spaces.
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
