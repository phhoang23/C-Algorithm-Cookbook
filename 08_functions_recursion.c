#include <stdio.h>

// Function: receives two integers and returns their sum.
int add(int a, int b) {
    return a + b;
}

// Recursive factorial: n! = n * (n-1)!; 0! = 1.
// Use only for small n; this int version can overflow.
int factorial(int n) {
    if (n <= 1) return 1;       // Base case stops recursion.
    return n * factorial(n - 1);
}

// Recursive Fibonacci: simple teaching version, slow for large n.
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int a, b, n;
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", add(a, b));

    scanf("%d", &n);
    if (n >= 0 && n <= 12)
        printf("Factorial = %d\n", factorial(n));
    else
        printf("Use n from 0 to 12 for this int example.\n");

    if (n >= 0 && n <= 40)
        printf("Fibonacci = %d\n", fibonacci(n));
    else
        printf("Use n from 0 to 40 for this int example.\n");

    return 0;
}
