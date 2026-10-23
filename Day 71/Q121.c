#include <stdio.h>

int main() {
    char name[50];
    int age;
    scanf("%s %d", name, &age);
    FILE *fp = fopen("info.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "Name: %s\nAge: %d\n", name, age);
        fclose(fp);
        printf("File created successfully! Data written to info.txt\n");
    }
    return 0;
}