#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int val;
    scanf("%d", &val);
    int i = n - 1;
    while (i >= 0 && arr[i] > val) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = val;
    n++;
    for (int j = 0; j < n; j++) {
        printf("%d%c", arr[j], (j == n - 1) ? '\n' : ' ');
    }
    return 0;
}