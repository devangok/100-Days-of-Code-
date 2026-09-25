#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    if (scanf("%s", s) == 1) {
        int len = strlen(s);
        int pal = 1;
        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len - 1 - i]) {
                pal = 0;
                break;
            }
        }
        if (pal) printf("Palindrome\n");
        else printf("Not palindrome\n");
    }
    return 0;
}