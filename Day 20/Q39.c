#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prod = 1;
    int has_odd = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) {
            prod *= d;
            has_odd = 1;
        }
        n /= 10;
    }
    if (!has_odd) {
        prod = 1;
    }
    printf("%d\n", prod);
    return 0;
}