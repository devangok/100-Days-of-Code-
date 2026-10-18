#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                idx1 = i;
                idx2 = j;
                break;
            }
        }
        if (idx1 != -1) break;
    }
    printf("%d %d\n", idx1, idx2);
    return 0;
}