#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int original = n;
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }
    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}