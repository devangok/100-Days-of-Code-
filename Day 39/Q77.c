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
    int distinct = 1;
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }
    if (distinct) printf("True\n");
    else printf("False\n");
    return 0;
}