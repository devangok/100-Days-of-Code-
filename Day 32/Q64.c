#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    if (n < 0) n = -n;
    int count[10] = {0};
    if (n == 0) count[0]++;
    while (n > 0) {
        count[n % 10]++;
        n /= 10;
    }
    int max_freq = -1;
    int best_digit = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_freq) {
            max_freq = count[i];
            best_digit = i;
        }
    }
    printf("%d\n", best_digit);
    return 0;
}