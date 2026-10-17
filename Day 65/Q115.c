#include <stdio.h>
#include <string.h>

int main() {
    char s[200], t[200];
    scanf("%s", s);
    scanf("%s", t);
    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) count[s[i] - 'a']++;
    for (int i = 0; t[i] != '\0'; i++) count[t[i] - 'a']--;
    int is_ana = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            is_ana = 0;
            break;
        }
    }
    if (is_ana) printf("Anagram\n");
    else printf("Not Anagram\n");
    return 0;
}