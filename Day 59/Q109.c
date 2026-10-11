#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int max_sum = -1e9;
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++) {
            sum += arr[i + j];
        }
        if (sum > max_sum) max_sum = sum;
    }
    printf("%d\n", max_sum);
    return 0;
}