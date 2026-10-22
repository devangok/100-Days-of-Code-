#include <stdio.h>
#include <ctype.h>

int main() {
    char s[300];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        int new_word = 1;
        for (int i = 0; s[i] != '\0'; i++) {
            if (isalpha(s[i])) {
                if (new_word) {
                    s[i] = toupper(s[i]);
                    new_word = 0;
                }
            } else if (s[i] == ' ') {
                new_word = 1;
            }
        }
        printf("%s", s);
    }
    return 0;
}