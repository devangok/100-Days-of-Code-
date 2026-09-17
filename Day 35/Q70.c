#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    k = k % n;
    int res[100];
    for (int i = 0; i < n; i++) {
        res[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d%c", res[i], (i == n - 1) ? '\n' : ' ');
    }
    return 0;
}