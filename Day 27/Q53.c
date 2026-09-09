#include <stdio.h>

int main() {
    int stars[] = {1, 3, 5, 7, 9, 7, 5, 3, 1};
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < stars[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}