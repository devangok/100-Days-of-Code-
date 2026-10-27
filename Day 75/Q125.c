#include <stdio.h>

int main() {
    char filename[100];
    char text[200];
    scanf("%s", filename);
    getchar();
    fgets(text, sizeof(text), stdin);
    FILE *fp = fopen(filename, "a");
    if (fp != NULL) {
        fprintf(fp, "%s", text);
        fclose(fp);
        printf("File updated successfully with appended text.\n");
    }
    return 0;
}