#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int total = n * (n + 1) / 2;
    int ans = -1;
    for (int x = 1; x <= n; x++) {
        if (x * x == total) {
            ans = x;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}