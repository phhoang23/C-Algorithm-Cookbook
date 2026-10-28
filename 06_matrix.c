#include <stdio.h>

#define MAX 20

int main(void) {
    int a[MAX][MAX], transposed[MAX][MAX];
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols); // Ensure each dimension <= MAX.
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) printf("%d ", a[i][j]);
        printf("\n");
    }

    // Sum each row.
    for (i = 0; i < rows; i++) {
        int rowSum = 0;
        for (j = 0; j < cols; j++) rowSum += a[i][j];
        printf("Row %d sum = %d\n", i, rowSum);
    }

    // Transpose: swap row and column indices.
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            transposed[j][i] = a[i][j];

    printf("Transpose:\n");
    for (j = 0; j < cols; j++) {
        for (i = 0; i < rows; i++) printf("%d ", transposed[j][i]);
        printf("\n");
    }

    return 0;
}
