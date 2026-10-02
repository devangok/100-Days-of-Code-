#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    if (scanf("%s", s) == 1) {
        int len = strlen(s);
        int first = 1;
        for (int i = 0; i < len; i++) {
            for (int j = i; j < len; j++) {
                if (!first) printf(",");
                for (int k = i; k <= j; k++) {
                    putchar(s[k]);
                }
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}