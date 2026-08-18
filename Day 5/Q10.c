#include <stdio.h>

int main() {
    int total_seconds;
    scanf("%d", &total_seconds);
    int h = total_seconds / 3600;
    int m = (total_seconds % 3600) / 60;
    int s = total_seconds % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}