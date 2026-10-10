#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int ans[100];
    for (int i = 0; i < n; i++) {
        int p = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) p *= arr[j];
        }
        ans[i] = p;
    }
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", ans[i], (i == n - 1) ? "]\n" : ",");
    }
    return 0;
}