#include <stdio.h>

int main() {
    int n;
    long long a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
