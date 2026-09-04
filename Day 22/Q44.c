#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float sum = 0.0f;
    for (int i = 1; i <= n; i++) {
        sum += (2.0f * i - 1.0f) / (2.0f * i);
    }
    printf("Approximate sum: %.1f\n", sum);
    return 0;
}