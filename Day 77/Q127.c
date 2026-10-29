#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fi = fopen("input.txt", "r");
    FILE *fo = fopen("output.txt", "w");
    if (fi != NULL && fo != NULL) {
        char ch;
        while ((ch = fgetc(fi)) != EOF) {
            fputc(toupper(ch), fo);
        }
        fclose(fi);
        fclose(fo);
    }
    return 0;
}