#include <stdio.h>

int main() {
    char s[200];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
            if (s[i] == ' ') s[i] = '-';
        }
        printf("%s", s);
    }
    return 0;
}