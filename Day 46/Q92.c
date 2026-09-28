#include <stdio.h>

int main() {
    char s[200];
    if (scanf("%s", s) == 1) {
        int count[26] = {0};
        char found = '\0';
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                count[s[i] - 'a']++;
                if (count[s[i] - 'a'] == 2) {
                    found = s[i];
                    break;
                }
            }
        }
        if (found != '\0') printf("%c\n", found);
        else printf("-1\n");
    }
    return 0;
}