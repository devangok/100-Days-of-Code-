#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float sum = 0.0f;
    for (int i = 1; i <= n; i++) {
        sum += (2.0f * i) / (4.0f * i - 1.0f);
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}