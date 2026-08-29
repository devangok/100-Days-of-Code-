#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    int bin[32];
    int idx = 0;
    while (n > 0) {
        bin[idx++] = n % 2;
        n /= 2;
    }
    for (int i = idx - 1; i >= 0; i--) {
        printf("%d", bin[i]);
    }
    printf("\n");
    return 0;
}