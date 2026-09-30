#include <stdio.h>
#include <string.h>

int main() {
    char line[500];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        int len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') line[--len] = '\0';
        int start = 0;
        for (int i = 0; i <= len; i++) {
            if (line[i] == ' ' || line[i] == '\0') {
                for (int j = i - 1; j >= start; j--) {
                    putchar(line[j]);
                }
                if (line[i] == ' ') putchar(' ');
                start = i + 1;
            }
        }
        putchar('\n');
    }
    return 0;
}