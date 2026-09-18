#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[10][10];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d%c", mat[i][j], (j == c - 1) ? '\n' : ' ');
        }
    }
    return 0;
}