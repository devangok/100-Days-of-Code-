#include <stdio.h>
#include <string.h>

int main() {
    char line[200];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        int new_word = 1;
        for (int i = 0; line[i] != '\0' && line[i] != '\n'; i++) {
            if (line[i] != ' ') {
                if (new_word) {
                    printf("%c.", line[i]);
                    new_word = 0;
                }
            } else {
                new_word = 1;
            }
        }
        printf("\n");
    }
    return 0;
}