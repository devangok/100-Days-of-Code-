#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp != NULL) {
        int chars = 0, words = 0, lines = 0;
        int in_word = 0;
        char ch;
        while ((ch = fgetc(fp)) != EOF) {
            chars++;
            if (ch == '\n') lines++;
            if (isspace(ch)) {
                in_word = 0;
            } else if (!in_word) {
                in_word = 1;
                words++;
            }
        }
        if (chars > 0 && lines == 0) lines = 1;
        fclose(fp);
        printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    }
    return 0;
}