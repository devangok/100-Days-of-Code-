#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    if (scanf("%s", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            char ch = tolower(s[i]);
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}