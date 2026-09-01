#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }
    int gcd = x;
    long long lcm = ((long long)a * b) / gcd;
    printf("%lld\n", lcm);
    return 0;
}