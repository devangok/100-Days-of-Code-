#include <stdio.h>

int main() {
    char s[200];
    if (scanf("%s", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            printf("%c\n", s[i]);
        }
    }
    return 0;
}