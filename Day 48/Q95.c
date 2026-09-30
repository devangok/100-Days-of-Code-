#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200];
    scanf("%s", s1);
    scanf("%s", s2);
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }
    char temp[400];
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    return 0;
}