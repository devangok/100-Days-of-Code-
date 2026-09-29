#include <stdio.h>
#include <string.h>

int main() {
    char line[500];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char max_word[100] = "";
        char cur_word[100] = "";
        int cur_len = 0;
        int max_len = 0;
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] != ' ' && line[i] != '\n' && line[i] != '\r') {
                cur_word[cur_len++] = line[i];
            } else {
                if (cur_len > max_len) {
                    cur_word[cur_len] = '\0';
                    strcpy(max_word, cur_word);
                    max_len = cur_len;
                }
                cur_len = 0;
            }
        }
        if (cur_len > max_len) {
            cur_word[cur_len] = '\0';
            strcpy(max_word, cur_word);
        }
        printf("%s\n", max_word);
    }
    return 0;
}