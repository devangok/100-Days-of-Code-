#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            int val;
            scanf("%d", &val);
            sum += val;
        }
        printf("%d%c", sum, (i == r - 1) ? '\n' : ' ');
    }
    return 0;
}