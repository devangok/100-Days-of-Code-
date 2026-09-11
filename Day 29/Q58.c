#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int val;
    scanf("%d", &val);
    int max = val, min = val;
    for (int i = 1; i < n; i++) {
        scanf("%d", &val);
        if (val > max) max = val;
        if (val < min) min = val;
    }
    printf("Max=%d, Min=%d\n", max, min);
    return 0;
}