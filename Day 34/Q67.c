#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos, val;
    scanf("%d %d", &pos, &val);
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
    }
    return 0;
}