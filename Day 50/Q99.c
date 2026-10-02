#include <stdio.h>

int main() {
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);
    char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("%02d-%s-%d\n", d, months[m], y);
    return 0;
}