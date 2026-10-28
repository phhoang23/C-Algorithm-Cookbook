#include <stdio.h>
#include <stdlib.h>

// Pointers let a function modify the caller's variables.
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x, y, n, i;
    int *a;

    scanf("%d %d", &x, &y);
    swap(&x, &y); // Pass addresses so swap can change x and y.
    printf("x = %d, y = %d\n", x, y);

    scanf("%d", &n);
    if (n <= 0) return 1;

    // Allocate n integers on the heap.
    a = malloc((size_t)n * sizeof(*a));
    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    free(a); // Release memory when finished.
    a = NULL;
    return 0;
}
