#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int val;
            scanf("%d", &val);
            if (i == j) sum += val;
        }
    }
    printf("%d\n", sum);
    return 0;
}