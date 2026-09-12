#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int pos = 0, neg = 0, zero = 0, val;
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        if (val > 0) pos++;
        else if (val < 0) neg++;
        else zero++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    return 0;
}