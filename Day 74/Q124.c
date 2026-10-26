#include <stdio.h>

int main() {
    char src[100], dest[100];
    scanf("%s %s", src, dest);
    FILE *fs = fopen(src, "r");
    FILE *fd = fopen(dest, "w");
    if (fs != NULL && fd != NULL) {
        char ch;
        while ((ch = fgetc(fs)) != EOF) {
            fputc(ch, fd);
        }
        fclose(fs);
        fclose(fd);
        printf("File copied successfully to %s\n", dest);
    }
    return 0;
}