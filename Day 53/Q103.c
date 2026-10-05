#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int total = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    int left = 0, pivot = -1;
    for (int i = 0; i < n; i++) {
        if (left == total - left - arr[i]) {
            pivot = i;
            break;
        }
        left += arr[i];
    }
    printf("%d\n", pivot);
    return 0;
}