#include <stdio.h>
long double fibIter(long double n) {
    if (n <= 1)
        return n;

    long double prev = 0, current = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = current;
        current = prev + current;
        prev = temp;
    }
    return current;
}

int main() {
    long double n;
    printf("n: ");
    scanf("%Lf", &n);
    printf("fib(%.*Lf) = %.*Lf\n", 0, n, 0, fibIter(n));
    return 0;
}
