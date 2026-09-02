#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '0') {
            printf("1");
        } else if (s[i] == '1') {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}