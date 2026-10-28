#include <stdio.h>
#include <stdlib.h>

// Prime test: true if n is prime. Values below 2 are not prime.
int isPrime(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= n / i; i++) { // Equivalent to i*i <= n, avoids overflow.
        if (n % i == 0) return 0;
    }
    return 1;
}

// Greatest common divisor (Euclidean algorithm).
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Least common multiple. For int-sized classroom examples.
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return abs((a / gcd(a, b)) * b);
}

int digitSum(int n) {
    int sum = 0;
    n = abs(n);
    while (n > 0) {
        sum += n % 10; // Last digit.
        n /= 10;       // Remove last digit.
    }
    return sum;
}

int reverseInteger(int n) {
    int result = 0;
    while (n != 0) {
        int digit = n % 10;
        result = result * 10 + digit;
        n /= 10;
    }
    return result;
}

int main(void) {
    int n, a, b;
    scanf("%d", &n);
    printf("Prime? %s\n", isPrime(n) ? "Yes" : "No");
    printf("Digit sum = %d\n", digitSum(n));
    printf("Reversed integer = %d\n", reverseInteger(n));

    scanf("%d %d", &a, &b);
    printf("GCD = %d\n", gcd(a, b));
    printf("LCM = %d\n", lcm(a, b));
    return 0;
}
