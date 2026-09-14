#include <stdio.h>

int main() {
    int n1;
    scanf("%d", &n1);
    int a[100];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    int n2;
    scanf("%d", &n2);
    int b[100];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n1; i++) {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < n2; i++) {
        printf("%d%c", b[i], (i == n2 - 1) ? '\n' : ' ');
    }
    return 0;
}