#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long prod = 1;
    for (int i = 2; i <= n; i += 2) {
        prod *= i;
    }
    printf("%lld\n", prod);
    return 0;
}