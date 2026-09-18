#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int sum = 0, val;
    for (int i = 0; i < r * c; i++) {
        scanf("%d", &val);
        sum += val;
    }
    printf("%d\n", sum);
    return 0;
}