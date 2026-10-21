#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int repeated = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                repeated = arr[i];
                break;
            }
        }
        if (repeated != -1) break;
    }
    printf("%d\n", repeated);
    return 0;
}