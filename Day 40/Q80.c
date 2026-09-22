#include <stdio.h>

int main() {
    int r1, c1;
    scanf("%d %d", &r1, &c1);
    int a[10][10];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int r2, c2;
    scanf("%d %d", &r2, &c2);
    int b[10][10];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int sum = 0;
            for (int k = 0; k < c1; k++) {
                sum += a[i][k] * b[k][j];
            }
            printf("%d%c", sum, (j == c2 - 1) ? '\n' : ' ');
        }
    }
    return 0;
}