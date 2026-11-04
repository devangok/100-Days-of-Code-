#include <stdio.h>
#include <string.h>

enum Months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char m[10];
    scanf("%s", m);
    if (strcmp(m, "FEB") == 0) {
        printf("28 or 29 days\n");
    } else if (strcmp(m, "APR") == 0 || strcmp(m, "JUN") == 0 || strcmp(m, "SEP") == 0 || strcmp(m, "NOV") == 0) {
        printf("30 days\n");
    } else {
        printf("31 days\n");
    }
    return 0;
}