#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0, val;
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        if (val % 2 == 0) even++;
        else odd++;
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}