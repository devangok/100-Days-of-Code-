#include <stdio.h>

int main() {
    char s[200];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        int count = 0;
        while (s[count] != '\0' && s[count] != '\n') {
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}