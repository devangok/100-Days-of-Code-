#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    char temp = s[0];
    s[0] = s[len - 1];
    s[len - 1] = temp;
    printf("%s\n", s);
    return 0;
}